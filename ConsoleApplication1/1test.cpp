#include <iostream>

int main() {
	
	setlocale(LC_ALL, "RU");

	int num1, num2; // от -2милиард до 2милиард, 4 байт
	std::cout << " введите переменную num1: ";
	std::cin >> num1;

	std::cout << " введите переменную num2: ";
	std::cin >> num2;

	std::cout << "num1: " << num1 << ". num2: " << num2;
	
	// Типы данных
	short num3 = 3; // от -32к до 32к, 2 байт
	unsigned short num4 = 4; // от 0к до 65к, 2 байт
	long num5 = 5; // 8 байт

	// числа с точкой
	float num6 = 6.6f;
	double num7 = 7.7777f;

	// Хранение символа
	char sym1 = 't';
	// Логический тип данных
	bool siPonyal = true;


	return 0;
}