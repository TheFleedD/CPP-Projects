#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int inputMess(string numb) {
    std::cout << "Введите число " << numb << " >" << std::endl;
    int a = 0;
    std::cin >> a;
    return a;
}
float func(int x, int y) {
    return pow(1 / pow(x, 2) + 1, x) - 12 * pow(x, 2) * y;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x = inputMess("X");
    int y = inputMess("Y");
    std::cout << "Ответ: " << func(x, y) << std::endl;
    return 0;
}
