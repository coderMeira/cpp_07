//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Array.hpp"

Array::Array() {
	// TODO (default constructor)
}

Array::Array(const Array& param) {
	// TODO (copy constructor)
	(void)param;
}

Array::~Array() {
	std::cout << "Array" << " destroyed" << std::endl;
	// TODO (destructor)
}

Array& Array::operator= (const Array& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const Array& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

