#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(int ac, char **av)
{
	sortdeque(ac, av);
	std::cout << std::endl;
	sortvector(ac, av);
}

PmergeMe::PmergeMe(PmergeMe& bis)
{
	*this = bis;
}

PmergeMe& PmergeMe::operator=(PmergeMe& bis)
{
	(void)bis;
	return (*this);
}

template <typename T>
void PmergeMe::printsort(T arg)
{
	typename T::const_iterator it;

	for (it = arg.begin(); it != arg.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

// template <typename T>
// bool cmp(T a, T b)
// { 
// 	if (a > b)
// 		return true;
// 	return false;
// }

void PmergeMe::sortvector(int ac, char **av)
{
	std::string 		arg;
	std::vector<int>	vec;
	struct timeval		start;
	struct timeval		end;

	gettimeofday(&start, NULL);
	for (int i = 1; i < ac; i++)
	{
		arg += av[i];
		arg += ' ';
	}
	if (arg.find_first_not_of("0123456789 ", 0) != std::string::npos)
		throw InvalidArg();
	for (int i = 1; i < ac; i++)
	{
		if (atoi(av[i]) == atol(av[i]))
			vec.push_back(std::atoi(av[i]));
		else 
			throw InvalidArg();
	}
	vec = VectorMergeSort(vec.size(), vec);
	gettimeofday(&end, NULL);

    long microseconds = end.tv_usec - start.tv_usec;
	std::cout << "Vector before: " << arg << std::endl;
	std::cout << "Vector after: " ;
	printsort(vec);
	std::cout << "Done in " << microseconds << " microseconds." << std::endl;
}

void PmergeMe::sortdeque(int ac, char **av)
{
	std::string 		arg;
	std::deque<int> 	deq;
	struct timeval		start;
	struct timeval		end;

	gettimeofday(&start, NULL);
	for (int i = 1; i < ac; i++)
	{
		arg += av[i];
		arg += ' ';
	}
	if (arg.find_first_not_of("0123456789 ", 0) != std::string::npos)
		throw InvalidArg();
	for (int i = 1; i < ac; i++)
	{
		if (atoi(av[i]) == atol(av[i]))
			deq.push_back(std::atoi(av[i]));
		else 
			throw InvalidArg();
	}
	deq = DequeMergeSort(deq.size(), deq);
	gettimeofday(&end, NULL);

    long microseconds = end.tv_usec - start.tv_usec;
	std::cout << "Deque before: " << arg << std::endl;
	std::cout << "Deque after: " ;
	printsort(deq);
	std::cout << "Done in " << microseconds << " microseconds." << std::endl;
}

std::vector<int> PmergeMe::VectorMergeSort(int len, std::vector<int> arg)
{
	if (len < 2)
		return(arg);
    std::vector<int> partner;
	std::vector<int>::iterator it = arg.begin();
    int half = len / 2;
    for (int i = 0; i < half; i++) 
	{
        partner.push_back(*it);
		arg.erase(it);
		it++;
	}
	if (len % 2 == 0)
		arg = VectorMergeSort(half, arg);
	else
		arg = VectorMergeSort(half + 1, arg);
	partner = VectorMergeSort(half, partner);
    for (int i = 0; i < half; i++) 
	{
        std::vector<int>::iterator ite = std::lower_bound(arg.begin(), arg.end(), partner[i], std::less<int>());
		arg.insert(ite, partner[i]);
    }
	return (arg);
}

std::deque<int> PmergeMe::DequeMergeSort(int len, std::deque<int> arg)
{
	if (len < 2)
		return(arg);
    std::deque<int> partner;
	std::deque<int>::iterator it = arg.begin();
    int half = len / 2;
    for (int i = 0; i < half; i++) 
	{
        partner.push_back(*it);
		arg.erase(it);
		it++;
	}
	if (len % 2 == 0)
		arg = DequeMergeSort(half, arg);
	else
		arg = DequeMergeSort(half + 1, arg);
	partner = DequeMergeSort(half, partner);
    for (int i = 0; i < half; i++) 
	{
        std::deque<int>::iterator ite = std::lower_bound(arg.begin(), arg.end(), partner[i], std::less<int>());
		arg.insert(ite, partner[i]);
    }
	return (arg);
}

const char *PmergeMe::InvalidArg::what() const throw()
{
	return ("Invalid arg : please enter only positive integers.");
}

const char *PmergeMe::InvalidDeque::what() const throw()
{
	return ("Error : Deque");
}

const char *PmergeMe::InvalidVector::what() const throw()
{
	return ("Error : Vector");
}
