#include "Includes/MutantStack.hpp"
#include <vector>

int main()
{
	// MutantStack<int> ms;

	// ms.push(1);
	// ms.push(2);
	// ms.push(3);

	// for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// }
	// return (0);
	MutantStack<int> mstack;

	std::cout << "MutantStack" << std::endl;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << "Vecteur" << std::endl;
	std::vector<int> vec;
	
	vec.push_back(5);
	vec.push_back(17);
	std::cout << vec.back() << std::endl;
	vec.pop_back();
	std::cout << vec.size() << std::endl;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);
	std::vector<int>::iterator itv = vec.begin();
	std::vector<int>::iterator itev = vec.end();
	++itv;
	--itv;
	while (itv != itev)
	{
	std::cout << *itv << std::endl;
	++itv;
	}
	std::vector<int> sv(vec);

	return 0;
}