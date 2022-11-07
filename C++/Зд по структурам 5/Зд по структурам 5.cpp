#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>

struct MicroChel
{
    std::string FIO;
    int Bal;
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*std::cout << "Введите количество учеников: \n";
    int n = 0;
    std::cin >> n;
    for (int i;i <= n;i++)
    {
        MicroChel
        std::cout << "Введите имя: ";
        std::cin >>
    }*/
    MicroChel abc[7] = 
    { 
        { "ewsg",20 },
        { "srgv",11 },
        { "ykuj",48 },
        { "sdfzc",71 },
        { "trhgb",32 },
        { "qaww",29 },
        { "iopl",100 }
    };
    for (int i = 0;i < 7;i++)
    {
        if(abc[i].Bal >= 30)
        std::cout << abc[i].FIO << " | бал: " << abc[i].Bal << std::endl;
    }
    return 0;
}