// Afanasyeva.V.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "russian");
	char a;
    std::cout << "введите тип фигуры";
	std::cin >> a;
	std::cout << "введите координаты фигуры и Вашего хода";
	int coor[4];
	for (int i = 0; i < 4; i++)
		std::cin >> coor[i];
	switch (a) {
 // p - это пешка
	case'p': if (abs(coor[3] - coor[1]) ==  1)
	    std::cout << "так можно сходить";
		   else 
		std::cout << "так нельзя сходить";
	    break;
// l - это ладья 
	case'l': if (coor[3] - coor[1] == 0 || coor[2] - coor[0] == 0)
		std::cout << "так можно сходить";
		   else 
		std::cout << "так нельзя сходить";
		break;
// s - это слон
	case's': if (coor[3] - coor[1] == coor[2] - coor[0])
		std::cout << "так можно сходить";
		   else
		std::cout << "так нельзя сходить";
	    break;
// k - это конь
	case'k': if (abs(coor[3] - coor[1]) == 5 && abs(coor[2] - coor[0]) == 2 || abs(coor[3] - coor[1]) == 2 && abs(coor[2] - coor[0] == 5))
		std::cout << "так можно сходить";
		   else
		std::cout << "так нельзя сходить";
		break;
// f - это ферзь
	case'f': if (coor[3] - coor[1] == 0 || coor[2] - coor[0] == 0 || coor[3] - coor[1] == coor[2] - coor[0])
		std::cout << "так можно сходить";
		   else
		std::cout << "так нельзя сходить";
		break;
// K - эо король
	case'K': if (abs(coor[3] - coor[1]) == 1 || abs(coor[2] - coor[0]) == 1)
		std::cout << "так можно сходить";
		   else
		std::cout << "так нельзя сходить";
		break;
	
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

