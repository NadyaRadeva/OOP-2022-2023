#ifndef _ARRAY_H
#define _ARRAY_H

class Array {
private:
	int* array = new int[256];
	unsigned capacity, size;

public:
	void allocateMemory(int*& array, size_t capacity);
	void freeMemory(int*& array, size_t& size, size_t& capacity);
	bool reallocateMemory(int*& array, size_t size, size_t newCapacity);
	bool resize(int*& array, size_t size, size_t& capacity);
	bool addElement(int*& array, size_t& size, size_t& capacity, int newElem);
	bool addElement(int*& array, size_t& size, size_t& capacity, int newElem, size_t position);
	void print(const int* array, size_t size, size_t capacity);
	bool removeElement(int*& array, size_t& size, size_t& capacity, size_t position);
};

#endif // !_ARRAY_H
