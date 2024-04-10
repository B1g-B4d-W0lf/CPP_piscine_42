#include "Includes/Data.hpp"
#include "Includes/Serializer.hpp"

Serializer::Serializer()
{
	return;
}

Serializer::~Serializer()
{
	return;
}

Serializer::Serializer(Serializer& bis)
{
	*this = bis;
}

Serializer& Serializer::operator=(Serializer& bis)
{
	(void)bis;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
