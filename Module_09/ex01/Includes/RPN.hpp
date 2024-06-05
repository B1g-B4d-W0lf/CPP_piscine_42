#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
	public :
		RPN();
		RPN(std::string arg);
		~RPN();
		RPN(RPN& bis);
		RPN& operator=(RPN& bis);
		void parse(std::string arg);
		int OpPl(int a, int b);
		int OpMi(int a, int b);
		int OpMu(int a, int b);
		int OpDi(int a, int b);
		void Switching(int a, int b, char s);
		class InvalidCalcul : public std::exception
			{
				public :
					virtual const char *what() const throw();
			}; 
	private :
		std::stack<int>	rpn;
		std::string		symb[4];

};

#endif