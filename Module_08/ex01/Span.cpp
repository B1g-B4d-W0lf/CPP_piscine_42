#include "Includes/Span.hpp"

Span::Span(): N(0)
{
	vec.reserve(0);
	index = 0;
}

Span::Span(unsigned int M): N(M)
{
	vec.reserve(100000);
	index = 0;
}

Span::Span(const Span& bis) : N(bis.N)
{
	*this = bis;
}

Span::~Span()
{
	return;
}

Span& Span::operator=(const Span& bis)
{
	// std::vector<int>::iterator	it;

	if (this == &bis)
		return (*this);
	// for (it = bis.vec.begin(); it != bis.vec.end; it++)
	// 	vec.push_back(*it);
	vec = bis.vec;
	index = bis.index;
	return (*this);
}

void Span::addNumber(int i)
{
	if (index == N)
		throw SpanIsFull();
	vec.push_back(i);
	index++;
}

void Span::addMore(int range)
{
	std::vector<int>			adding;

	srand(time(NULL));
	for (int i = 0; i < range; i++)
		adding.push_back(rand());
	if (index + std::distance(adding.begin(), adding.end()) > N)
		throw SpanIsFull();
	vec.insert(vec.end(), adding.begin(), adding.end());
	index += std::distance(adding.begin(), adding.end());
}

bool compare(int a, int b)
{
	return (a > b);
}

int Span::shortestSpan()
{
	std::vector<int>			temp = vec;
	int							mindiff;

	if (index <= 1)
		throw NothingToFind();
	std::sort(temp.begin(), temp.end(), compare);
	mindiff = temp[0] - temp[1];
	for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); it++)
	{
		if ((*it - *(it + 1)) < mindiff)
			mindiff = *it - *(it + 1);
	}

	return (mindiff);
}

int Span::longestSpan()
{
	std::vector<int>::iterator	it;
	int							min = vec[0];
	int							max = vec[0];

	if (index <= 1)
		throw NothingToFind();
	for (it = vec.begin(); it != vec.end(); it++)
	{
		if (*it < min)
			min = *it;
		else if (*it > max)
			max = *it;
	}

	return (max - min);
}

const char *Span::SpanIsFull::what() const throw()
{
	return ("Span is full.");
}

const char *Span::NothingToFind::what() const throw()
{
	return ("Span is empty.");
}
