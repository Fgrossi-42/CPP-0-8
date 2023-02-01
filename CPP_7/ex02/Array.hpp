#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>
#include <array>

template <typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;

    public:
    
        Array() {
            _array = new T[0];
            _size = 0;
        };

        Array(unsigned int n){
            _array = new T[n];
            _size = n;
        };

        Array(const Array& arr)
		{
			this->_array = new T[arr._size];
			this->_size = arr._size;
			for (unsigned int x = 0; x < arr._size; x++)
				this->_array[x] = arr._array[x];
		}

        Array& operator=(const Array& arr)
	    {
	    	if (this != &arr)
	    	{
	    		this->~Array();
	    		this->size = arr.size;
	    		this->array = new T[arr.size];
	    		for (unsigned int x = 0; x < arr.size; x++)
	    			this->_array[x] = arr._array[x];
	    	}
	    	return *this;
	    }
        
        ~Array()
        {
            delete [] _array;
        };
            
        T & operator[](unsigned int i)
        {
            if (i >= _size)
                throw std::exception();
            return _array[i];
        };

        unsigned int size(){return _size;};
};


#endif