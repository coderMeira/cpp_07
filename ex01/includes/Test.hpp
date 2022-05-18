//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __TEST_HPP__
# define __TEST_HPP__

#include <iostream>

class Test {
	public:
		Test();
		Test(const Test&);
		~Test();
		Test&	operator= (const Test&); // const for safety... not super nesessary

		char	getC(void) const;
	private:
		char	c_;
};

std::ostream&	operator<<(std::ostream&, const Test&);

#endif

