//Зд 22
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    string str = "", word = "";
    int k = 0;
    bool t = false;

    cout << "Введите строку=";
    cin >> str;
    cout << "Введите слово=";
    cin >> word;
    for (int i = 0; i < str.size() - word.size() + 1; i++)
    {
        t = false;
        for (int j = 0; j < word.size(); j++)
        {
            if (str[i + j] != word[j])
            {
                break;
            }
            else
            {
                t = true;
            }
        }
        if (t)
            k++;
    }
    cout << "Слово встречено " << k << " раз";
    return 0;
}