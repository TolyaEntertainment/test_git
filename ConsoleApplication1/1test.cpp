#include <iostream>

int main() {
	
	setlocale(LC_ALL, "RU");

	int num1, num2; // �� -2������� �� 2�������, 4 ����
	std::cout << " ������� ���������� num1: ";
	std::cin >> num1;

	std::cout << " ������� ���������� num2: ";
	std::cin >> num2;

	std::cout << "num1: " << num1 << ". num2: " << num2;
	
	// ���� ������
	short num3 = 3; // �� -32� �� 32�, 2 ����
	unsigned short num4 = 4; // �� 0� �� 65�, 2 ����
	long num5 = 5; // 8 ����

	// ����� � ������
	float num6 = 6.6f;
	double num7 = 7.7777f;

	// �������� �������
	char sym1 = 't';
	// ���������� ��� ������
	bool siPonyal = true;


	return 0;
}