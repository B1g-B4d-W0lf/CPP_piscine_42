#include "Includes/Zombie.hpp"
#include <ctime>
#include <sstream>
#include <string>

std::string	syllable(char c)
{
	if (c == '0')
		return ("Foo");
	else if (c == '1')
		return ("Hy");
	else if (c == '2')
		return ("Gu");
	else if (c == '3')
		return ("Bla");
	else if (c == '4')
		return ("Be");
	else if (c == '5')
		return ("Ji");
	else if (c == '6')
		return ("Dur");
	else if (c == '7')
		return ("Fla");
	else if (c == '8')
		return ("Cli");
	else if (c == '9')
		return ("Stu");
	return ("AH");
}

std::string	generate(void)
{
	time_t 				timestamp = time(NULL);
	struct 				tm *time = localtime(&timestamp);
	int					i = time->tm_sec;
	std::stringstream	ss;
	std::string			a;
	std::string			b;
	std::string			result;

	ss << i;
	std::string	str = ss.str();
	a = syllable(str[0]);
	b = syllable(str[1]);
	result = a + b;
	return (result);
}

int	main(void)
{
	randomChump(generate());

	Zombie *ok;
	ok = newZombie(generate());
	ok->announce();
	delete ok;
}