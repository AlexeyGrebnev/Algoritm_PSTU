// МЕТОД НЬЮТОНА
#include <iostream>
#include <cmath>
using namespace std;

    // f(x) = 3 * sin(sqrt(x)) + 0.35 * x - 3.8 
    // f'(x) = 3 * cos((x)^0.5) * x^(-0.5) + 0.35
    // f''(s) = (sin(x^0.5)+ (cos(x^0.5) / x^0.5))
    // [2 , 3]
    // f(a) * f ''(a) > 0
    // f(b) * f''(b) > 0  (подходит по усл)

int main ()
{
    setlocale(LC_ALL, "RUS");
    float x, xPred;
    double eps = 0.000001;
    // f(b) * f''(b) > 0 (т.к удовлетвор усл)
    x = 3; // берём значение x0, которое удовлетворяет одному из двух усл (см выше)
    xPred = 0; // делаем заведомо сильно меньше x, чтобы цикл правильно сработал
     while (abs(x - xPred) > eps)
     {
         xPred = x; // "Условный swap" для нахождения корня
         x = Xpred - (3 * sin(sqrt(xPred)) + 0.35 * xPred - 3.8); //Само тело выражения
     }
     cout << "Корень по Методу Ньютона =>  " << x << endl;
     return 0;
}
