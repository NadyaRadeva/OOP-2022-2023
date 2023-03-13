#ifndef WAFFLESTORE_H_
#define WAFFLESTORE_H_

#include<cstring>
#include "Waffle.h"
const unsigned MAX_SIZE = 21;

class WaffleStore {
private:
	Waffle example_waffle;
	int count, maxCount, income, expenses;

public:
	void Initialise();
	void orderWaffles(Waffle waffle, int count);
	void sellWaffle();
	void printShop();
	void printProfit();
};

#endif // !
