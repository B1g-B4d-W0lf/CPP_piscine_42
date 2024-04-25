#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"
#include <stdint.h>

class Serializer
{
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private :
		Serializer();
		~Serializer();
		Serializer(Serializer& bis);
		Serializer& operator=(Serializer& bis);
};

#endif