#pragma once
#include <iostream>

struct products {
	std::string name;
	int number = 0;
	int price;
};

void printProd(products& P);

int fullPrice(products& P);

void sell(products& P, int& a);