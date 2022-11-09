using namespace std;
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <iomanip>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string s1;
    cout << "Введите строчку = ";
    getline(cin,s1);
    int k = s1.size();
    for (int i=s1.size();i>0;i--)
    {
        char c = s1[i];
        if (c == ' ')
        {
            k = k - i;
            break;
        }
    }
    cout << "Количество символов в последнем слове строки > " << k - 1 << endl;
}

