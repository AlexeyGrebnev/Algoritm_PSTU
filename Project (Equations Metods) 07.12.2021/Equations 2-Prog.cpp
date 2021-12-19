// МЕТОД НЬЮТОНА
#include <iostream>
#include <cmath>
using namespace std;

    // f(x) = x^3 - x - 1
    // f'(x) = 3x^2 - 1
    // [1 , 2]
    // f(a) * f ''(a) >> 0
    // (1 - 1 - 1) * (1*6) - проверка 
    // f(b) * f''(b) > 0 
    // (8 - 2 - 1) * (6*2) > 0 => x0 = b

int main ()
{
    float x, xPred // Икс текущий и предыдущий 
    // f(b) * f''(b) > 0 
    // (8 - 2 - 1) * (6*2) > 0 => x0 = b
    x = 2; // можно выбрать любое x0 из [1 , 2] - выбранного заранее промежутка
    xPred = 0; // делаем заведомо сильно меньше x, чтобы цикл правильно сработал
    double eps = 0.000001;
     while (abs(x - xPred) > eps)
     {
         xPred = x;
         x = xPred -(pow(xPred, 3) - xPred - 1) / (3*pow(xPred, 2) - 1)
     }
     cout << "Корень по Методу Ньютона =>  " << x << endl;
     return 0;
}