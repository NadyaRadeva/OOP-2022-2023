#ifndef _MYSTRING_H
#define _MYSTRING_H

#include<cstring>

class MyString {
private:
	int size; // ïàçè äúëæèíàòà íà ìàñèâà áåç íóëàòà
	char* str;

	void copy(const MyString&);
	void erase();

public:
	MyString();
	MyString(const char* str);
	MyString(const MyString&);
	MyString& operator=(const MyString&);

	int lenght();
	char& at(unsigned indx);
	int find(char c, unsigned startPos = 0);
	bool empty();
	MyString substr(unsigned pos = 0, unsigned n = 0);
	void append(const MyString& str);
	void print() const;
};


#endif // !_MYSTRING_H
