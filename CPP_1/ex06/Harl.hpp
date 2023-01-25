#ifndef Harl_HPP
# define Harl_HPP

# include <iostream>

class Harl
{
	typedef  void (Harl::*MemberFunction)(void);
	#define CALL_MEMBER_FN(object, ptrToMember) ((object).*(ptrToMember))

	public:
		Harl();
		~Harl();
		void complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif