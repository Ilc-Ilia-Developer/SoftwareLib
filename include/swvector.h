#pragma once

#include <swint.h>

template <typename T> class vector {
private:
	T* array;
	int current_idx = 0;
public:
	vector() {
	};
	~vector() {};
	
	void Add(T obj) {
		T* temp = new T[current_idx+1];
		
		for(int i = 0; i < current_idx; i++) {
			temp[i] = array[i];
		}
		
		//delete [] array;
		array = temp;
		
		array[current_idx++] = obj;
	};
	void Remove(int index) {
		T* temp = new T[current_idx];
		
		int permit = 0;
		
		for(int i = 0; i < current_idx; i++) {
			if(i != index) {
				temp[i - permit] = array[i];
			} else {
				permit++;
			}
		}
		
		//delete [] array;
		array = temp;
		
		current_idx--;
	};
	void Remove(int index, int amount) {
		if(amount + index >= current_idx) amount = current_idx - index;
		T* temp = new T[current_idx];
		
		int permit = 0;
		
		for(int i = 0; i < current_idx; i++) {
			if(i < index || i >= index + amount) {
				temp[i - permit] = array[i];
			} else {
				permit++;
			}
		}
		
		//delete [] array;
		array = temp;
		
		current_idx-=amount;
	};
	void Remove(T obj) {
		T* temp = new T[current_idx];
		
		int permit = 0;
		
		for(int i = 0; i < current_idx; i++) {
			if(array[i] != obj) {
				temp[i - permit] = array[i];
			} else {
				permit++;
			}
		}
		
		array = temp;
		
		current_idx-=permit;
	};
	
	T operator[](int index) {
		if(index < current_idx)
			return array[index];
	}
	
	size_t Size() { return current_idx; }
};