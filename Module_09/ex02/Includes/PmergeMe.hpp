#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <functional>
#include <ctime>
#include <sys/time.h>

class PmergeMe 
{
	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(int ac, char **av);
		PmergeMe(PmergeMe& bis);
		PmergeMe& operator=(PmergeMe& bis);

		template <typename T>
		void printsort(T arg);

		void sortdeque(int ac, char **av);
		void sortvector(int ac, char **av);
		std::vector<int> VectorMergeSort(int len, std::vector<int> arg);
		std::deque<int> DequeMergeSort(int len, std::deque<int> arg);
		class InvalidArg : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class InvalidVector : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class InvalidDeque : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif