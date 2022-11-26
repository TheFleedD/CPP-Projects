#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class TMath
{
private:
    int column, row;
    int** gMas;
    void InitMas(int c, int r)//инициализация массива с изменением его размеров
    {
        row = r;
        column = c;
        int** mas = new int* [row];
        for (int count = 0; count < row; count++)
            mas[count] = new int[column];
        for (int i = 0; i <= row - 1;i++)
        {
            for (int j = 0; j <= column - 1; j++)
            {
                mas[i][j] = rand() % 20 - 7;
            }
        }
        gMas = mas;
    }
public:
    TMath()//конструктор по умолчанию
    {
        TMath::InitMas(3,3);
    }
    TMath(int column, int row)//конструктор с параметрами
    {
        TMath::InitMas(row,column);
    }
    void Print()//вывод свего массива на экран
    {
        for (int i = 0; i <= row - 1;i++)
        {
            for (int j = 0; j <= column - 1; j++)
            {
                cout.width(3);
                cout << gMas[i][j] << " ";
            }
            cout << endl;
        }
    }
    void reInit()
    {
        int a, b;

        cout << "Введите количество срок =" << endl;
        cin >> a;
        cout << "Введите количество столбцов =" << endl;
        cin >> b;
        InitMas(b, a);
    }
    void custPrint(int r, int c)//вывод подматрицы размерами R на C
    {
        if ((r > 0) && (r <= row) && (c > 0) && (c <= column))
        {
            for (int i = 0; i <= r - 1;i++)
            {
                for (int j = 0; j <= c - 1; j++)
                {
                    cout.width(3);
                    cout << gMas[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Неверная размерность подматрицы" << endl;
        }
    }
    int** get()//метод предназначеный для вывода матрицы из экзэмпляра объекта в программу
    {
        return gMas;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, m;

    cout << "Введите N" << endl;
    cin >> n;
    cout << "Введите M" << endl;
    cin >> m;
    TMath* tm = new TMath(n, m);
    tm->Print();
    tm->reInit();
    tm->Print();
    tm->custPrint(2,2);
    int** mas1 = tm->get();
}