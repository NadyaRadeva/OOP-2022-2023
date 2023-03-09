#include "MyString.h"

void MyString::copy(const MyString& other) {
	size = other.size;
	
	str = new char[size];
	for (int i = 0; i < size; i++) {
		str[i] = other.str;
	}
}

void MyString::erase() {
	str = nullptr;
	size = 0;
}

MyString::MyString():str(nullptr), size(0)
{
	str = nullptr;
	size = 0;
}

MyString::MyString(const char* str)
{
	size = strlen(str);
	str = new char[size];
}

MyString::MyString(const MyString& other)
{
	copy(other);
}

MyString& MyString::operator=(const MyString& other)
{
	if (this != &other) {
		erase();
		copy(other);
	}

	return *this;
}

int MyString::lenght() {
	char* str;

	int l = 0;

	if (str == nullptr) {
		return l;
	}
	else {
		for (size_t i = 0; i < *(str + 1); i++) {
			l++;
		}
	}

	return l;
}

char& MyString::at(unsigned indx) {

}

int MyString::find(char c, unsigned startPos = 0) {
	for (int i = startPos; i < strlen(str); i++) {
		if (c == str[i]) {
			return i;
		}
	}

	return -1;
}

bool MyString::empty() {
	if (strlen(str) == 0) {
		return true;
	}
	else {
		return false;
	}
}
MyString MyString::substr(unsigned pos = 0, unsigned n = 0) {

}

void MyString::append(const MyString& str) {

}

void MyString::print() const {
	for (int i = 0; i < strlen(str; i++)) {
		std::cout << str[i];
	}
	std::cout << std::endl;
}
