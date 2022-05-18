//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex00.hpp"

int	main(void)
{
	// int	a = 1;
	// int	b = 2;

	// std::cout << YELLOW << "Values of a and b before swap: \n" << ENDC;
	// std::cout << "a" << RED << " = " << ENDC << a << '\n';
	// std::cout << "b" << RED << " = " << ENDC << b << '\n';

	// swap(a, b);

	// std::cout << YELLOW << "Values of a and b after swap: \n" << ENDC;
	// std::cout << "a" << RED << " = " << ENDC << a << '\n';
	// std::cout << "b" << RED << " = " << ENDC << b << '\n';

	// std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	// std::cout << YELLOW << "Value returned from min between 1 and 2: \n" << ENDC;

	// std::cout << min(a, b) << '\n';

	// std::cout << YELLOW << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;
	// std::cout << YELLOW << "Value returned from max between 1 and 2: \n" << ENDC;

	// std::cout << max(a, b) << '\n';
	int	a = 2;
	int	b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return (0);
}
