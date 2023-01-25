#include <iostream>
#include "Act.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int first_num;
	int second_num;
	cout << "Введите первое число: ";
	cin >> first_num;
	cout << "Введите второе число: ";
	cin >> second_num;
	int act;
	cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	cin >> act;
	do_math(first_num, second_num, act);
}

