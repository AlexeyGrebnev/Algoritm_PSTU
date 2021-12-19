//МЕТОД ПОЛОВИННОГО ДЕЛЕНИЯ (рекомедованный метод для решения уравнений)
#include <iostream>
#include <cmath>
using namespace std;

    // f(x) = x^3 - x - 1
    // f'(x) = 3x^2 - 1
    // [1 , 2]
    // 1 - 1 - 1 = -1
    //f(1) * f(2) < 0

int main()
{
    float a,b,c;
    float fA, fB,fC;
    double eps = 0,000001; //Эпсилон точность
    a=1;
    b=2;
    while (b-a) //Расстояние отрезка
    {
    c = (a+b)/2;
    fA = (pow (a,3) - a - 1); //Ввод переменных для облегчения кода от переписывания длинных строк в циклах
    fB = (pow (b,3) - b - 1);
    fC = (pow (c,3) - c - 1);
    if (fA * fC < 0)
    {
        b = c;
    }
    else if (fC * fB < 0) {a = c;}
    else {cout << "Что-то не то !" << endl;}
    }
    cout << "Корни с помощью метода половинного деления  " << a << " , " << b << ";" << endl;
    return 0;
}