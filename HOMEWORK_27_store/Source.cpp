#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	cout << "\tЗадача.\n";

	// Это реально существующте товары которые можно купить. Посмотреть как это выглядит, можно по ссылкам)))
	products thing1 = { "Туалетный гольф.", 193, 1326 }; //https://zymbo.ru/razvlecheniya/golf-dlja-tualeta
	products thing2 = { "Парик для собаки.", 258, 341 }; //https://www.joom.com/ru/products/619350d4f30e7c011e9adabc
	products thing3 = { "Голова Джейсона Стетхема.", 500, 2742 };  //https://aliexpress.ru/item/1005003113994427.html?sku_id=12000024173252562&spm=a2g20.search.0.0.37531aacTn9cG6
	do {
		if (thing1.number == 0 && thing2.number == 0 && thing3.number == 0) {
			cout << "\n\n\nК СОЖАЛЕНИЮ ВЕСЬ ТОВАР БЫЛ РАСПРОДАН. СКОРО ОЖИДАЕТСЯ НОВОЕ ПОСТУПЛЕНИЕ.\n\n";
			break;
		}
		else
			cout << "Товар в наличии:\n1. ";
		if (thing1.number == 0)
			cout << "ТОВАР ОТСУТСТВУЕТ.\n\n";
		else
			printProd(thing1);
		cout << "2. ";
		if (thing2.number == 0)
			cout << "ТОВАР ОТСУТСТВУЕТ.\n\n";
		else
			printProd(thing2);
		cout << "3. ";
		if (thing3.number == 0)
			cout << "ТОВАР ОТСУТСТВУЕТ.\n\n";
		else
			printProd(thing3);

		cout << "4. Выйти из программы.\n\n";

		cout << "Укажите товар -> ";
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
			cout << "Суммарная стоимость остатков товара = " << fullPrice(thing1) << " руб.\n";
			cout << "\nВведите колличество купленного товара -> ";
			cin >> n;
			sell(thing1, n);
			break;
		case 2:
			if (thing2.number == 0)
				continue;
			else
				printProd(thing2);
			cout << "Суммарная стоимость остатков товара = " << fullPrice(thing2) << " руб.\n";
			cout << "\nВведите колличество купленного товара -> ";
			cin >> n;
			sell(thing2, n);
			break;
		case 3:
			if (thing3.number == 0)
				continue;
			else
				printProd(thing3);
			cout << "Суммарная стоимость остатков товара = " << fullPrice(thing3) << " руб.\n";
			cout << "\nВведите колличество купленного товара -> ";
			cin >> n;
			sell(thing3, n);
			break;
		case 4: cout << "Завершение работы программы!"; break;
		default: cout << "ОШИБКА! Такого товара нет! Введите корректное значение!\n\n"; system("pause"); system("cls"); break;
		}
	} while (n != 4);


	return 0;
}