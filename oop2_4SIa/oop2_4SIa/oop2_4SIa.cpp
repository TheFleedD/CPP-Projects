// oop2_4SIa.cpp :

#include <iostream>
#include <Windows.h>
#include <String>
using namespace std;
class Strin
{
private: 
    string str;
public:
    string getStr()
    {
        return str;
    }
public:
    Strin()
    {
        str = "";
    }
    Strin(string Str)
    {
        this->str = Str;
    }
    string Add(string Stradd)
    {
       return this->str = str + Stradd;
    }
    string RemoveFrom(int n)
    {
        string strig = "";
        int a = strig.size();
        for (int i = 0; i < this->str.size() - n;i++)
        {
            strig = strig + this->str[i];
        }
        this->str = strig;
        return this->str;
    }
    string AllDel()
    {
        return this->str = "";
    }
};
int main()
{
    start:
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите строчку "<<endl;
    string str,stradd;
    cin >> str;cout << endl;
    Strin a(str);
    
    cout << "0 - добалвение к уже существующей строчке элемента " << endl << "1 - удаление n символов с конца" << endl << "2 - удаление начальной строчки и переход в начало" << endl;
    int caser;
    cin >> caser;
    switch (caser)
    {
    case 0:
        cout << "Введите элемент с заданым значением данного(просто еще немного строчки)" << endl;
        cin >> stradd;cout << endl;
        a.Add(stradd);
        break;
    case 1:
        int n;
        cout << "Введте количество элементов > ";
        cin >> n;cout << endl;
        a.RemoveFrom(n);
        break;
    case 2:
        a.AllDel();
        system("cls");
        goto start;
        break;
    }
    cout << a.getStr();
}
