//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

template <typename T>
class Array {
	public:
		Array() : arr_(NULL), size_(0) {}
		Array(unsigned int n): arr_(new T[n]), size_(n) {}
		Array(Array const &copy): arr_(NULL) { *this = copy; }
		~Array() {delete[] arr_;};

		unsigned int size(void) const
		{
			return (this->size_);
		};

		Array &operator=(Array &a)
		{
			if (this == &a)
				return (*this);

			delete[] arr_;
			size_ = a.size();
			arr_ = new T[size_];
			for (unsigned int i = 0; i < size_; i++)
				this->arr_[i] = a.arr_[i];

			return (*this);
		}

		T &operator[](unsigned int i)
		{
			if (i < 0 || i >= size_)
				throw (Array::IndexOutofBounds());
			return (arr_[i]);
		}


		class IndexOutofBounds : public std::exception
		{
			public:
				const char* what() const throw() {
					return ("Index out of bounds");
				}
		};

		private:
			T*				arr_;
			unsigned int	size_;
};

// std::ostream&	operator<<(std::ostream&, const Array&);
#endif

