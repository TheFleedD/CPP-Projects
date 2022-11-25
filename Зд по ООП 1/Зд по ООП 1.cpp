#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

struct Irrlt
{
private:
    double first, second;

public:
    Irrlt()
    {
        first = 0;
        second = 0;
    }
    Irrlt(double first, double second)
    {
        this->first = first;
        this->second = second;
    }

    void Read()
    {
        cout << "Введите число А" << endl;
        cin >> first;
        while (first == 0)
        {
            cin.clear();
            cout << "Введите число Б не равное 0 =" << endl;
            cin >> first;
        }
        cout << "Введите число Б" << endl;
        cin >> second;
        while (second == 0)
        {
            cin.clear();
            cout << "Введите число Б не равное 0 =" << endl;
            cin >> second;
        }
    }
    void Display()
    {
        cout << "Число А =" << first << endl;
        cout << "Число Б =" << second << endl;
        cout << "Корень =" << Irrlt::Root() << endl;
    }
    double Root()
    {
        return (-second / first);
    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Irrlt ir;
    ir.Read();
    cout << "Кор =" << ir.Root() << endl;
    ir.Display();
}