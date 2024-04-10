#include "Includes/Base.hpp"
#include "Includes/A.hpp"
#include "Includes/B.hpp"
#include "Includes/C.hpp"

Base* generate(void)
{
	time_t 				timestamp = time(NULL);
	struct 				tm *time = localtime(&timestamp);
	int					i = time->tm_sec;

	if (i % 3 == 0)
		return (new C);
	else if (i % 2 == 0)
		return (new B);
	else 
		return (new A);
	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Oh, a class A pointer." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Oh, a class B pointer." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Oh, a class C pointer." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "Oh, another class A pointer." << std::endl;
	}
	catch (std::exception& e) {}

	try
	{
		B&	b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "Oh, another class B pointer." << std::endl;
	}
	catch (std::exception& e) {}

	try
	{
		C&	c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "Oh, another class C pointer." << std::endl;
	}
	catch (std::exception& e) {}
}

int main()
{
	Base *random;

	random = generate();

	identify(random);
	identify(*random);

	delete random;
	return (0);

}
