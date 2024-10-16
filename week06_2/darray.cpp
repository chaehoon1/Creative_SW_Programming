#include "darray.h"

void DynamicArray::put(int var)
{
if(_count < _len) {
				*(_tmp + _count) = var;
				*(_arr + _count) = var;
				_count++;
			}
			else {
				_len = 2 * _len;
				delete[] _tmp;
				_tmp = new int[_len];
				for(int i = 0; i < (_len / 2); i++) {
					*(_tmp + i) = *(_arr + i);
				}
				*(_tmp + _count) = var;
				delete[] _arr;
				_arr = new int[_len];
				for(int i = 0; i < _count; i++) {
					*(_arr + i) = *(_tmp + i);
				}
				_count++;
			}
}

int DynamicArray::at(int index) {
		if(index < _len) {
			return *(_arr + index);
		}
		else { return -1;}
	}

