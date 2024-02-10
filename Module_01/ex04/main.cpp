#include <string>
#include <fstream>
#include <iostream>

void	ft_sed(std::ifstream& file, std::string& s1, std::string& s2, std::string out)
{
	int				j = 0;
	size_t			occ;
	std::string		str;
	std::string		filebis;
	std::ofstream	output(out.c_str());
	if (!output.is_open())
		return(file.close()) ;

	while (std::getline(file, str))
		filebis = filebis + str + "\n";
	filebis.erase((filebis.length() - 1), 1);
	while ((occ = filebis.find(s1, j)) != std::string::npos)
	{
		filebis.erase(occ, s1.length());
		filebis.insert(occ, s2);
		j = occ + s2.length();
	}
	output << filebis ;
	output.flush();
	output.close();
	file.close();
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "./[prog] [file] [search] [replacer]" << std::endl, 1);
	std::ifstream	ifs(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		file(av[1]);

	if (!ifs.is_open())
		return (std::cout << "Cannot open file" << std::endl, 1);
	if (!av[2])
		return (std::cout << "Second arg can't be empty" << std::endl, 1);
	ft_sed(ifs, s1, s2, file += ".replace");
}