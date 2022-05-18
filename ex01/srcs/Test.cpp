//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Test.hpp"

Test::Test(): c_('a') {
	// TODO (default constructor)
}

Test::Test(const Test& param) {
	// TODO (copy constructor)
	(void)param;
}

Test::~Test() {
	std::cout << "Test" << " destroyed" << std::endl;
	// TODO (destructor)
}

Test& Test::operator= (const Test& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

char	Test::getC(void) const
{
	return (c_);
}

std::ostream& operator<<(std::ostream& s, const Test& param) {
	s << param.getC(); return s;
	(void)param;
	return (s);
}

