//Метод Половинного Деления ( 3 * sin(sqrt(x)) + 0.35 * x - 3.8 ) 
#include <iostream>
#include <cmath>
using namespace std;

//f(x)=3 * sin(sqrt(x)) + 0.35 * x - 3.8 = 0
//f'(x)=3*cos((x)^0.5) * x^(-0.5) + 0.35
// [2,3]
//f(2) * f(3) < 0

int main()
{
    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001; //Эпсилон точность
    a = 2;
    b = 3;
    while (b - a > eps) //Расстояние отрезка
    {
        c = (a + b) / 2;
        fA = 3 * sin(sqrt(a)) + 0.35 * a - 3.8; //Ввод переменных для облегчения кода от переписывания длинных строк в циклах
        fB = 3 * sin(sqrt(b)) + 0.35 * b - 3.8;
        fC = 3 * sin(sqrt(c)) + 0.35 * c - 3.8;
        if (fA * fC < 0)
        {
            b = c;
        }
        else if (fC * fB < 0) { a = c; }
        else { cout << "Что-то не то !" << endl; }
    }
    cout << "Корни с помощью метода половинного деления  " << a << " , " << b << ";" << endl;
    return 0;
}