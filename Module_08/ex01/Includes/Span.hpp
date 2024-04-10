#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public :
		Span(unsigned int M);
		Span(const Span& bis);
		~Span();
		Span& operator=(const Span& bis);
		void addNumber(int i);
		void addMore(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();

		class SpanIsFull : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class NothingToFind : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :
		const unsigned int	N;
		unsigned int		index;
		std::vector<int>	vec;

		Span();
};

#endif