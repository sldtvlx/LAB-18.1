#include <iostream>
using namespace std;

template<typename G>
G getCorrectNubmer(G inputType)
{
	G inputNumber;
	while (!(cin >> inputNumber) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n')
		{
			cin.ignore();
			cout << "Введите корректное число: ";
		}
	}
	return inputNumber;
}

class product
{
public:
	long int price;
	long int lot;

	void print()
	{
		cout << "\nВы должны будете заплатить: " << price * lot << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	product one;

	do
	{
		cout << "Введите цену товара: ";
		cin >> one.price;
	} while (one.price < 0);

	do
	{
		cout << "\nВведите кол-во товаров: ";
		cin >> one.lot;
	} while (one.lot < 0);

	one.print();

	return 0;
}
