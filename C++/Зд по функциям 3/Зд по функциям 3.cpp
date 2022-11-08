#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>

double calkLength(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, x2, x3, y1, y2, y3;
    std::cout << "Введите Х первой точки треугольника: ";
    std::cin >> x1;
    std::cout << "Введите y первой точки треугольника: ";
    std::cin >> y1;
    std::cout << "Введите Х второй точки треугольника: ";
    std::cin >> x2;
    std::cout << "Введите y второй точки треугольника: ";
    std::cin >> y2;
    std::cout << "Введите Х третей точки треугольника: ";
    std::cin >> x3;
    std::cout << "Введите y третей точки треугольника: ";
    std::cin >> y3;
    std::cout << "Периметр треугольника = " << calkLength(x1,y1,x2,y2) + calkLength(x2,y2,x3,y3) + calkLength(x1,y1,x3,y3);
}
