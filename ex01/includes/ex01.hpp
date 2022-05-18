//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __EX01_HPP__
# define __EX01_HPP__

#include <iostream>

template <typename T>
void	iter(T *arr, size_t	len, void (*f)(T const &))
{
	if (!arr)
		return;
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}


# define BLACK	"\033[0;30m"
# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define YELLOW	"\033[0;33m"
# define BLUE	"\033[0;34m"
# define WHITE	"\033[0;37m"
# define ENDC	"\033[0m"

#endif
