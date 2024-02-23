#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl 
{
	public:
		Harl();
		~Harl();
		void		(Harl::*ptr[4])(void);
		void 		complain( int i );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif