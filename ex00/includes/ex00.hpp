//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __EX00_HPP__
# define __EX00_HPP__

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T	min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T	max(T &a, T &b)
{
	return (a > b ? a : b);
}

# define BLACK	"\033[0;30m"
# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define YELLOW	"\033[0;33m"
# define BLUE	"\033[0;34m"
# define WHITE	"\033[0;37m"
# define ENDC	"\033[0m"

#endif
