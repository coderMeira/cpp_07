//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

#include <iostream>

template <class T>
class Array {
	public:
		Array(){arr_ = new (T);};
		Array(T n){ arr_ = new (T[n]);};
		Array(const Array& a){if (a.arr_){for (int i = 0; i < a.size(); i++){this->arr_[i] = a.arr_[i];}}};
		~Array();

		Array&	operator= (const Array&){if (a.arr_){for (int i = 0; i < a.size(); i++){this->arr_[i] = a.arr_[i];}}return(*this);};
		~Array();
		const Array& operator[](std::size_t idx){try: this.arr_[idx]; catch(...);throw(std::exception);return this.arr_[idx]; }

		std::size_t	size(void){int i = 0; while (this->arr_[i]){i++;}return(i);}

		T*	arr_;
};
// std::ostream&	operator<<(std::ostream&, const Array&);
#endif

