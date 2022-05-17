#include "Products.h"
#include <iostream>
#include <string>

void printProd(products& P) {
	std::cout << "�������� ������: " << P.name << std::endl;
	std::cout << "����������� ������: " << P.number << " ��." << std::endl;
	std::cout << "���� �� �������: " << P.price << " ���." << std::endl << std::endl;
}

int fullPrice(products& P) {
	return P.number * P.price;
}

void sell(products& P, int& N) {
	while (N > P.number) {
		std::cout << "������! ��� ������ ����������� ������!\n\n������� ���������� ����������� -> ";
		std::cin >> N;
	}
	P.number -= N;
	std::cout << "������� ������ = " << P.number << " ��.\n\n";
	system("pause");
	system("cls");
}