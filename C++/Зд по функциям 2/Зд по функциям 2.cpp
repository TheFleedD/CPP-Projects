#include <iostream>
#include <Windows.h>

float func1(float x) {
    return 4 * pow(x, 2) + (2 * x) - 19;
}
float func2(float x) {
    return ((2 * x) / (-4 * x + 1));
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x = 0;
    std::cout << "Введите X =";
    std::cin >> x;
    if (x >= 3.5) {
        std::cout << func1(x);
    }
    else {
        std::cout << func2(x);
    }
}
