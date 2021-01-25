﻿#include<iostream>

void Exchange(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "Russian");

	int a = 2, b = 3;

	std::cout << a << "\t" << b << std::endl;
	std::cout << &a << "\t" << &b << std::endl;

	Exchange(a, b);
	std::cout << a << "\t" << b << std::endl;
}

void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
	
	std::cout << &a << "\t" << &b << std::endl;
	std::cout << a << "\t" << b << std::endl;
}
