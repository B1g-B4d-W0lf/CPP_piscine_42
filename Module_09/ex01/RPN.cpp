#include "Includes/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string arg)
{
	symb[0] = '+';
	symb[1] = '-';
	symb[2] = '*';
	symb[3] = '/';

	parse(arg);
}

RPN::~RPN(){}

RPN::RPN(RPN& bis)
{
	*this = bis;
}

RPN& RPN::operator=(RPN& bis)
{
	rpn = bis.rpn;
	for (int i = 0; i <= 4; i++)
		symb[i] = bis.symb[i];
	return (*this);
}

void	RPN::parse(std::string arg)
{
	std::string		sym = "+-/*";
	int				a;
	int				b;

	if (arg.find_first_not_of("0123456789-/*+ ", 0) != std::string::npos)
		throw RPN::InvalidCalcul();
	for (int i = 0; arg[i]; i++)
	{
		if (isdigit(arg[i]) && isdigit(arg[i+1]))
			throw RPN::InvalidCalcul();
		if ((arg[i] < '1' || arg[i] > '9') && arg[i] != ' ' && (arg[i+1]) && arg[i+1] != ' ' && (arg[i+1] < '1' || arg[i+1] > '9'))
			throw RPN::InvalidCalcul();
		if (isdigit(arg[i]))
			rpn.push(arg[i] - '0');
		else if (sym.find(arg[i]) != std::string::npos)
		{
			b = rpn.top();
			rpn.pop();
			a = rpn.top();
			rpn.pop();
			Switching(a, b, arg[i]);
		}
	}
	if (rpn.size() != 1)
		std::cout << "Calcul is unfinished, not enough operators." << std::endl;
	else
		std::cout << "result is : " << rpn.top() << std::endl;
}

void RPN::Switching(int a, int b, char s)
{
	for (int i = 0; i <= 4; i++)
	{
		if (symb[i][0] == s)
		{
			switch(i)
			{
				case 0:
					rpn.push(OpPl(a,b));
					break;
				case 1:
					rpn.push(OpMi(a,b));
					break;
				case 2:
					rpn.push(OpMu(a,b));
					break;
				case 3:
					rpn.push(OpDi(a,b));
					break;
			}
		}
	}
}

int RPN::OpPl(int a, int b)
{ return (a + b); }

int RPN::OpMi(int a, int b)
{ return (a - b); }

int RPN::OpMu(int a, int b)
{ return (a * b); }

int RPN::OpDi(int a, int b)
{ return (a / b); }

const char *RPN::InvalidCalcul::what() const throw()
{
	return ("Wrong format, please enter numbers between 1 & 9 and operators only.");
}