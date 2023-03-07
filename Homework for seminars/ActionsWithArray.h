#ifndef _ACTIONSWITHARRAY_
#define _ACTIONSWITHARRAY_

struct Arr {
	int* array = new int[256];
	unsigned capacity, size;

	void allocateMemory(int*& array, size_t capacity, size_t size);
	bool reallocate(int*& array, size_t size, size_t newCapacity);
	bool resize(int*& array, size_t size, size_t& capacity);
	bool addElement(int*& array, size_t& size, size_t& capacity, int newElem);
	bool addElement(int*& array, size_t& size, size_t& capacity, int newElem, size_t position);
	void print(const int* array, size_t size, size_t capacity);
	//bool removeElement(int*& array, size_t& size, size_t& capacity, size_t position);
};

#endif // !_ACTIONSWITHARRAY_

