//TODO:
/*
Поменять местами две переменные без использования третьей переменной.
Это можно сделать арифметическими либо побитовыми операторами.
http ://cplusplus.com/doc/tutorial/operators/
*/
#include<iostream>

void Exchange_XOR(int& a, int& b);
void Exchange_MATH(int& a, int& b);
void Print(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2; int b = 5;

	std::cout << "Исходные значения:\n";
	Print(a, b);
	std::cout << std::endl;

	std::cout << "Exchange_XOR(a, b)\n";
	Exchange_XOR(a, b);
	Print(a, b);
	std::cout << std::endl;

	std::cout << "Exchange_MATH(a, b)\n";
	Exchange_MATH(a, b);
	Print(a, b);
	std::cout << std::endl;

	std::cout << "The program is over.\n";
}

void Exchange_XOR(int& a, int& b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

void Exchange_MATH(int& a, int& b)
{
	a += b;
	b = a - b;
	a = a - b;
}

void Print(int& a, int& b)
{
	std::cout << "a = " << a << "\t";
	std::cout << "b = " << b << std::endl;
}

//Исполнитель
/*
-----------------------------------------------------
|                                                   |
|   "Компьютерная академия ШАГ"                     |
|   Курс: БД011                                     |
|   Предмет: Основы програмvирования на языке C++   |
|                                                   |
|   Исполнитель: Курицын Алексей                    |
|   Преподаватель: Ковтун Олег                      |
|                                                   |
|   Екатеринбург - 2021                             |
|                                                   |
-----------------------------------------------------*/
