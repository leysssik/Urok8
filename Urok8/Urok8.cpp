﻿#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
	//int a1 = 0, b1 = 10;
	//cout << boolalpha;
	//cout << (a1 < b1) << endl;
	//if (a1<b1)
	//{
		//cout << "True" << endl << a1 + b1;
	//}
	//while (a1 <= b1)
	//{
		//a1++;
		//cout << "a1 = " << a1 << endl;
	//}
	//for (a1 =0; a1 <= b1; a1++)
	//{
		//cout << "a1= " << a1 << endl;
	//}
	//for (int i=0; i<10; i++)
	//{
		//cout << "i= " << i << endl;
	//}
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a1, b1, c1, s1;
	string d1, f1, g1;
	cout << "Введите команду для действий:\n 0 - для соединения \n 1 - для сложения \n 2 - для умножения \n 3 - для вычитания \n 4 - для целого деления \n 5 - для деления с остатком" << endl;
	cin >> a1;
	//cout << boolalpha;
	if (a1 == 1)
	{
		cout << "Введите первое число " << endl;
		cin >> b1;
		cout << "Введите второе число " << endl;
		cin >> c1;
		s1 = b1 + c1;
		cout << "Сумма двух чисел = " << s1 << endl;
	}
	else
		if (a1 == 0)
		{
			cout << "Введите 1 слово" << endl;
			cin >> d1;
			cout << "Введите 2 слово" << endl;
			cin >> f1;
			g1 = d1 + " " + f1;
			cout << "Соединяем слова = " << g1 << endl;
		}
	else
		if (a1 == 2)
		{
			cout << "Введите 1 число" << endl;
			cin >> b1;
			cout << "Введите 2 число" << endl;
			cin >> c1;
			s1 = b1 * c1;
			cout << "Произведение двух чисел  = " << s1 << endl;
		}
	else
		if (a1 == 3)
		{
			cout << "Введите 1 число" << endl;
			cin >> b1;
			cout << "Введите 2 число" << endl;
			cin >> c1;
			if (b1 <= c1)
			{
				cout << "От меньшего нельзя отнять большее" << endl;
			}
			else
			{
				s1 = b1 - c1;
				cout << "Разность двух чисел  = " << s1 << endl;
			}

		}
	else
		if (a1 == 4)
		{
			cout << "Введите 1 число" << endl;
			cin >> b1;
			cout << "Введите 2 число" << endl;
			cin >> c1;
			s1 = b1 / c1;
			cout << "Частное двух чисел  = " << s1 << endl;
		}
		else
			if (a1 == 5)
			{
				cout << "Введите 1 число" << endl;
				cin >> b1;
				cout << "Введите 2 число" << endl;
				cin >> c1;
				if (b1 <= c1)
				{
					cout << "Меньше не делится на большее" << endl;
				}
				else
				{
					s1 = b1 % c1;
					cout << "Остаток от деления  = " << s1 << endl;
				}
			}
		else
		{
			cout << "Нет такой команды" << endl;
		}
}
