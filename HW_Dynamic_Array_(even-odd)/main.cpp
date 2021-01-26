//TODO:
/*
Есть массив, заполненный случайными числами. Необходимо создать еще два массива минимально возможного размера для четных и нечетных значиний из исходного массива.
В массив even вынести четные значения, а в массив odd - нечетные.
*/
#include<iostream>

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите размер исходного массива: "; std::cin >> n;
	std::cout << std::endl;
	
	int* arr = new int[n];

	FillRand(arr, n); //генерация исходного массива

	int even_count = 0; int odd_count = 0; //соличества четных и нечетных чисел.

	for (int i = 0; i < n; i++) //Подсчет количества четных и не четных чисел в исходном массиве
	{
		(arr[i] % 2 != 1) ? even_count++ : odd_count++;
	}

	int* even = new int[even_count];
	int* odd = new int[odd_count];

	for (int i = 0, index_even = 0, index_odd = 0; i < n; i++) //Разделение исходного массива на массив четных чисел и на массив не четных чисел
	{
		if (arr[i] % 2 != 1)
		{
			even[index_even] = arr[i];
			index_even++;
		}
		else
		{
			odd[index_odd] = arr[i];
			index_odd++;
		}
	}

	std::cout << "Исходный массив:\n";
	Print(arr, n);
	std::cout << std::endl << std::endl;

	std::cout << "Массив с ЧЁТНЫМИ числами (even):\n";
	Print(even, even_count);
	std::cout << std::endl;
	std::cout << "Количество значений (even_count) = " << even_count;
	std::cout << std::endl << std::endl;

	std::cout << "Массив с НЕ ЧЁТНЫМИ числами (odd):\n";
	Print(odd, odd_count);
	std::cout << std::endl;
	std::cout << "Количество значений (odd_count) = " << odd_count;
	std::cout << std::endl << std::endl;

	delete[] arr;
	delete[] even;
	delete[] odd;

	std::cout << "Ноль - чётное число, т.к. делится на 2 без остатка.\n";
	std::cout << "Если вы не в казино. Там ноль является нейтральным! )))\n";
	std::cout << std::endl;
	std::cout << "Программа завершена.\n";
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}

void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i>0 && !(i % 10)) std::cout << std::endl; //Перенос кадое 10-е значение. Для красоты.
		std::cout.width(3); //Ширина cout. Для красоты.
		std::cout << arr[i] << "  ";
	}
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