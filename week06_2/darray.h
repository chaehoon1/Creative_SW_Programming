#ifndef __DARRAY_H__
#define __DARRAY_H__
#include <iostream>

class DynamicArray {
	private :
		int _len;
		int* _arr;
		int* _tmp;
		int _count;
	public :
		DynamicArray(int len)
			: _len(len)
		{
		std::cout << "Dynamic array" << std::endl;
		_arr = new int[_len];
	        _tmp = new int[_len];
		_count = 0;	

		}

		void put(int var);

		int at(int index);		
			
		int get_size() {
			return _len;
		}

		~DynamicArray() {
			std::cout << "~Dynamic array" << std::endl;
			delete[] _arr;
			delete[] _tmp;
		}
};

#endif //__DARRAY_H__
