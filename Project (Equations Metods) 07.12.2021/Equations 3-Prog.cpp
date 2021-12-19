//МЕТОД ИТЕРАЦИИ
#include <iostream>
#include <cmath>
using namespace std;

    // f(x) = x^3 - x - 1
    // f'(x) = 3x^2 - 1
    // [1 , 2]
    // ф(x) = x + lyam( x^3 - x - 1) (lyam - лямда)
    // -1/r < lyam < 0 , если f'(x) > 0
    // 0 < lyam < 1/r , если f'(x) < 0
    // r = max (|f'(a)| , |f'(b)|) - выбор максимальной между a и b!
    // lyam = -1/20 = -0.05 (- Выбор любого значения для удобства из полученного промежутка для лямды)

int main()
{
    float x,xPred;
    double lyam = -0.05; // -1/20 лямда 
    double eps = 0.000001;
    x = 2; // можно выбрать любое x0 из [1 , 2] - выбранного заранее промежутка
    xPred = 0; // делаем заведомо сильно меньше x, чтобы цикл правильно сработал
    while (abs(x - xPred) > eps )
    {
        xPred = x ;
        x = lyam * (pow(xPred, 3) - xPred - 1) + xPred
    }
    cout << "Корень по методу Итерации =>  " << x << endl;
    return 0;
}