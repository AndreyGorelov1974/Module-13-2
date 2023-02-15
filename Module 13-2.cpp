﻿/*Задача 2
Что нужно сделать
С помощью списка инициализации задаётся вектор цен на продукты (дробными числами).
Таким же образом с помощью списка инициализации задаётся вектор покупок (в виде индексов), которые совершает человек.
Необходимо вывести на экран итоговую стоимость покупок. Вектор цен и вектор покупок можно задать напрямую в коде.

Пример выполнения
// Вектор цен выглядит так: {2.5, 4.25, 3.0, 10.0}.

std::vector<float> prices {2.5, 4.25, 3.0, 10.0};

// Вектор покупок: {1, 1, 0, 3}, то есть два товара по индексу 1 и по одному — индексов 0 и 3.

std::vector<int> items {1, 1, 0, 3};

Суммарная стоимость будет равна 21.0.
Советы и рекомендации
При получении итоговой стоимости покупок не нужно делать циклы по обоим векторам, достаточно одного цикла.

Что оценивается
Программа не допускает выхода за границы вектора цен.*/

#include <iostream>
#include <vector>

int main()
{
	int vectorSize;
	std::cout << "Input vector size: ";
	std::cin >> vectorSize;
	std::vector<int> userVector(vectorSize);

	std::cout << "Input numbers: ";
	int elements = 0;

	for (int i = 0; i < userVector.size(); ++i)
	{
		std::cin >> elements;
		userVector[i] = elements;
	}

	std::cout << "Input number to delete: ";
	int deleteValue = 0;
	std::cin >> deleteValue;
	for (int i = 0; i < userVector.size(); ++i)
	{
		if (userVector[i] == deleteValue) {
			//при помощи обмена перемещаем элемент в конец вектора
			for (int j = i; j < userVector.size() - 1; ++j) {
				std::swap(userVector[j], userVector[j + 1]);
			}
			userVector.pop_back();
			//уменьшаем счётчик цикла что бы не пропустить следующий элемент
			--i;
		}
	}

	std::cout << "Result: ";
	for (int i = 0; i < userVector.size(); ++i)
	{
		std::cout << userVector[i] << " ";
	}

}