#include "ActionsWithArray.h"

#include<iostream>
#include<cassert>

void Arr::allocateMemory(int*& array, size_t capacity, size_t size) {
	assert(capacity > 0);
	assert(array == nullptr);
	array = new int[capacity];
	size = 0;
}

bool Arr::reallocate(int*& array, size_t size, size_t newCapacity) {
	assert(newCapacity > 0);
	assert(size < newCapacity);

	int* newArray = newArray = new (std::nothrow) int[newCapacity];
	if (newArray = nullptr) {
		return false;
	}

	for (int i = 0; i < size; i++) {
		newArray[i] = array[i];
	}

	delete[] array;
	array = newArray;

	return true;
}

bool Arr::resize(int*& array, size_t size, size_t& capacity) {
	size_t newCapacity = capacity * 2;

	reallocate(array, size, newCapacity);
}

bool Arr::addElement(int*& array, size_t& size, size_t& capacity, int newElem) {
	if (size == capacity) {
		resize(array, size, capacity);
		array[size++] = newElem;
		return true;
	}
	else {
		array[size++] = newElem;
		return true;
	}

	return false;
}

bool Arr::addElement(int*& array, size_t& size, size_t& capacity, int newElem, size_t position) {
	if (size + 1 > capacity) {
		resize(array, size, capacity);
		for (int i = capacity; i >= position; i--) {
			array[i] = array[i - 1];

		}
		array[position - 1] = newElem;
		return true;
	}
	else {
		for (int i = capacity; i >= position; i--) {
			array[i] = array[i - 1];

		}
		array[position - 1] = newElem;
		return true;
	}

	return false;
}

void Arr::print(const int* array, size_t size, size_t capacity) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] + " ";
	}
}
