#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	cout << "\t������.\n";

	// ��� ������� ������������ ������ ������� ����� ������. ���������� ��� ��� ��������, ����� �� �������)))
	products thing1 = { "��������� �����.", 193, 1326 }; //https://zymbo.ru/razvlecheniya/golf-dlja-tualeta
	products thing2 = { "����� ��� ������.", 258, 341 }; //https://www.joom.com/ru/products/619350d4f30e7c011e9adabc
	products thing3 = { "������ �������� ��������.", 500, 2742 };  //https://aliexpress.ru/item/1005003113994427.html?sku_id=12000024173252562&spm=a2g20.search.0.0.37531aacTn9cG6
	do {
		if (thing1.number == 0 && thing2.number == 0 && thing3.number == 0) {
			cout << "\n\n\n� ��������� ���� ����� ��� ���������. ����� ��������� ����� �����������.\n\n";
			break;
		}
		else
			cout << "����� � �������:\n1. ";
		if (thing1.number == 0)
			cout << "����� �����������.\n\n";
		else
			printProd(thing1);
		cout << "2. ";
		if (thing2.number == 0)
			cout << "����� �����������.\n\n";
		else
			printProd(thing2);
		cout << "3. ";
		if (thing3.number == 0)
			cout << "����� �����������.\n\n";
		else
			printProd(thing3);

		cout << "4. ����� �� ���������.\n\n";

		cout << "������� ����� -> ";
		cin >> n;
		cout << "\n";
		system("pause");
		system("cls");
		switch (n) {
		case 1:
			if (thing1.number == 0)
				continue;
			else
				printProd(thing1);
			cout << "��������� ��������� �������� ������ = " << fullPrice(thing1) << " ���.\n";
			cout << "\n������� ����������� ���������� ������ -> ";
			cin >> n;
			sell(thing1, n);
			break;
		case 2:
			if (thing2.number == 0)
				continue;
			else
				printProd(thing2);
			cout << "��������� ��������� �������� ������ = " << fullPrice(thing2) << " ���.\n";
			cout << "\n������� ����������� ���������� ������ -> ";
			cin >> n;
			sell(thing2, n);
			break;
		case 3:
			if (thing3.number == 0)
				continue;
			else
				printProd(thing3);
			cout << "��������� ��������� �������� ������ = " << fullPrice(thing3) << " ���.\n";
			cout << "\n������� ����������� ���������� ������ -> ";
			cin >> n;
			sell(thing3, n);
			break;
		case 4: cout << "���������� ������ ���������!"; break;
		default: cout << "������! ������ ������ ���! ������� ���������� ��������!\n\n"; system("pause"); system("cls"); break;
		}
	} while (n != 4);


	return 0;
}