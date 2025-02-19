#include <iostream> 

int main()
{
    int num;
    std::cin >> num;

    switch (num) {
    case 5: std::cout << "num is 5 ";
        break;

    case 6: std::cout << "num is 6 ";
        break;

    default: std::cout << "default ";
        break;
    }

    return 0;
}