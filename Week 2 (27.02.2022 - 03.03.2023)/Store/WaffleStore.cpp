#include "WaffleStore.h"
#include<exception>

void WaffleStore::Initialise() {
	if (maxCount < 0) {
		this->maxCount = 20;
	}
	else {
		this->maxCount = maxCount;
		income = expenses = 0;
		count = 0;
	}
}

void WaffleStore::orderWaffles(Waffle waffle, int count) {
	if (this->count != 0) {
		throw std::exception("Store not empty!");
	}

	if (maxCount < count || count < 1) {
		throw std::exception("Not enough space!");
	}

	this->example_waffle = waffle;
	this->count = count;

	expences+=waffle.priceForMany=...
}
