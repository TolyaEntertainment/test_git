#include <iostream> 

int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "RU");

	int num1;
	std::cout << "введите число: ";
	std::cin >> num1;
	if (num1 > 3) {
		std::cout << "num1 > 3\n";
	}

	else if (num1 == 3) {
		std::cout << "num1 = 3\n";

	}
	else {
		std::cout << "num1 <3\n";

	}
	
	return 0;

}