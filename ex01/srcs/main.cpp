//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex01.hpp"
#include "Test.hpp"

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
}

int	main(void)
{
	int		intArray[] = {0, 1, 2, 3, 4, 5};
	Test	classArray[6];

	std::cout << YELLOW << "Running print on intArray: \n" << ENDC;
	iter(intArray, 6, print);
	std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	std::cout << YELLOW << "Running print on classArray: \n" << ENDC;
	iter(classArray, 5, print);
	return (0);
}
