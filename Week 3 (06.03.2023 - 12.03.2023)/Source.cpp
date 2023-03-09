/*Реализирайте клас MyString, който наподобява std::string (Клас за низови променливи). Създайте голяма четворка, като конструктура по подразбиране да инициализира обекта като празен низ. Класа да съдържа и следните член-функци:

MyString(const char * str) - конструктор, който инициализира обекта чрез с-низ
length() - връща дължината на низа
char& at(unsigned indx) - дава достъп до символа на индекс indx. Ако няма такъв индекс, метода да хвърли грешка.
find(char c, unsigned startPos = 0) - връща първия индекс, на който се намира символа с, започвайки от startPos нататък. Ако такъвсимвол няма, метода да върне -1.
empty() - връща дали низа е празен.
MyString substr(unsigned pos = 0, unsigned n = 0) - връща подниза започващ на индекс pos и имащ дължина n символа. Ако няма индекс pos, метода да хвърли грешка. Ако pos+n > length(), да се върне подниза започващ от pos и стигащ до края на низа.
append(const MyString& str) - долепва низа str в края.
print() - отпечатва низа на екрана*/

#include "MyString.h"
#include<iostream>

int main() {
	char word[10] = { "apple"};

	MyString str = { word };

	std::cout << "Length of string: " << str.lenght() << std::endl;
	std::cout << str.find(word, 0) << std::endl;
	//std::cout<<str.at()
	//std::cout<<str.append()
	//std::cout<<str.substr()
	std::cout << str.empty() << std::endl;
	std::cout << str.print() << std::endl;
}
