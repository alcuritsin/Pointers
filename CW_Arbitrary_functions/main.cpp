#include<iostream>

int  Sum(int n, int value, ...)
{
	/*
	n - количество аргументов
	value - первый аргумент
	*/

	int sum = 0;
	int* start = &value;
	for (int i = 0; i < n; i++)
	{
		sum += *start++;
	}

	return sum;
}

int Mul(int value ...)
{
	int product = 1;
	int* start = &value;

	while (*start != int())
	{
		product *= *start++;
	}
	return product;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Summ = " << Sum(6, 2, 3, 5, 8, 13, 21) << std::endl;
	std::cout << "Mul = " << Mul(6, 2, 3, 5, 8, 13, 21, 0) << std::endl;

}