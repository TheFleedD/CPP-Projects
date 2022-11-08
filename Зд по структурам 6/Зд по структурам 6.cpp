#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

struct Marsh
{
    string mStart;
    string mEnd;
    int mId;
};
int main()
{
    const int n = 4;//кол-во элементов

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Marsh msh[n];

    cout << "Введите идекс маршрута 1 : ";
    cin >> msh[0].mId;
    cout << "Введите пункт начала маршрута 1 : ";
    cin >> msh[0].mStart;
    cout << "Введите пункт конца маршрута 1 : ";
    cin >> msh[0].mEnd;
    int idMax = msh[0].mId;

    for (int i = 1;i < n;i++)
    {
        cout << "Введите идекс маршрута "<< i+1<< " : ";
        cin >> msh[i].mId;
        if (msh[i].mId > idMax)
        {
            idMax = msh[i].mId;
        }
        cout << "Введите пункт начала маршрута " << i + 1 << " : ";
        cin >> msh[i].mStart;
        cout << "Введите пункт конца маршрута " << i + 1 << " : ";
        cin >> msh[i].mEnd;
    }
    int j = 0;
    for (int i = 0;i <= idMax + 1;i++)
    {
        if (msh[j].mId == i)
        {
            cout << msh[j].mId << " | " << msh[j].mStart << " --> " << msh[j].mEnd << endl;
            j++;
        }
    }
    string naznach = "";
    cout << "Введите пунк назначения : ";
    cin >> naznach;
    bool naznachFound = true;
    for (int i = 0;i < n;i++)
    {
        if ((msh[i].mEnd == naznach) || (msh[i].mStart == naznach))
        {
            cout << msh[i].mId << " | " << msh[i].mStart << " --> " << msh[i].mEnd << endl;
            naznachFound = false;
        }
    }
    if (naznachFound)
    {
        cout << "Маршрутов в " << naznach << " не найдено" << endl;
    }
    return 0;
}