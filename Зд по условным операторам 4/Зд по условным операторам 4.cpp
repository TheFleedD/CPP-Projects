#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>

int numberChek()
{
    int A;
    while (!(std::cin >> A) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Введите число" << std::endl;
    }
    return A;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите число:\n";
    int numb = numberChek();
    if (numb % 2 == 0)
    {
        std::cout << "Число четное и";
    }
    else
    {
        std::cout << "Число не четное и";
    }
    if (numb % 10 == 3)
    {
        std::cout << " оканчивается цифрой 3";
    }
    else
    {
        std::cout << " не оканчивается цифрой 3";
    }
}