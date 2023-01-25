#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & src);
		Fixed & operator=( Fixed const & rhs);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed(int const int_arg);
		Fixed(float const float_arg);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int	fixed_point_value;
		static const int n_fract_bits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
