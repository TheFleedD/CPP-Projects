#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str = "";
    cout << "Введите строку: " << endl;
    cin >> str;

    int l = str.length();
    char* ch = new char[l];
    int n = 0, k = 0;
    for (int i = 0; i < l - 1;i++)
    {
        bool f = true;
        for (int j = 0; j <= k; j++)
        {
            if (str[i] == ch[j])
                f = false;
        }
        if (f)
        {
            ch[k] = str[i];
            k++;
        }
    }
    cout << "Различных символов найдено =" << k << endl;
    for (int i = 0; i < k;i++)
    {
        cout << ch[i] << " ";
    }
    return 0;
}