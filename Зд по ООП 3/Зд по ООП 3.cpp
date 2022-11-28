#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Student
{
private:
    string nameUchOrg = "";
    string secondname = "";
    string inicial = "";
    int grupNumb = 0;
    int evals[5];
public:
    Student()
    {
        nameUchOrg = "";
        secondname = "";
        inicial = "";
        grupNumb = 0;
        evals[5] = {5};
    }
    Student(string nameUchOrg, string secondname, string inicial, int grupNumb)
    {
        this->nameUchOrg = nameUchOrg;
        this->secondname = secondname;
        this->inicial = inicial;
        this->grupNumb = grupNumb;
    }

    double srBal()
    {
        int s = 0;
        for (int i = 0; i < 5; i++)
            s += evals[i];
        return s / 5;
    }
    void inEvals()//ввод всех оценок
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Введите оценку " << i + 1 << " =";
            cin >> evals[i];
            cout << endl;
        }
    }
    void inEvals(int index)//ввод оценки по индексу начиная с 1
    {
            cout << "Введите оценку " << index << " =";
            cin >> evals[index - 1];
            cout << endl;
    }
    void input()
    {
        cout << "Введите название учебной организации =";
        cin >> nameUchOrg;
        cout << endl;
        cout << "Введите фамилию студента =";
        cin >> secondname;
        cout << endl;
        cout << "Введите инициалы студента =";
        cin >> inicial;
        cout << endl;
        cout << "Введите № группы =";
        cin >> grupNumb;
        cout << endl;
    }
    void Print()
    {
        cout << "Учебная организация >" << nameUchOrg << endl;
        cout << "Фамилия студента >" << secondname << endl;
        cout << "Инициалы студента >" << inicial << endl;
        cout << "Номер группы >" << grupNumb << endl;
        cout << "Оценки >";
        for (int i = 0; i < 5; i++)
        {
            cout << evals[i] << ' ';
        }
        cout << endl;
    }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите количество студенитов =";
    int n = 0; cin >> n; cout << endl;
    Student* sd = new Student[n];
    for (int i = 0; i < n; i++)
    {
        sd[i].input();
        sd[i].inEvals();
    }
    int k;bool g = true;
    cout << "Введите средний балл для поиска =";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (sd[i].srBal() > k)
        {
            sd[i].Print();
            cout << "Средний балл =" << sd[i].srBal() << endl;
            g = false;
        }
    }
    if (g)
    {
        cout << "Студентов со средним баллом больше " << k << " не найдено" << endl;
    }
}