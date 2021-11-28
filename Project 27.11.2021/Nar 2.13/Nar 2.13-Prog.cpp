#include <iostream>
#include <cmath>
using namespace  std;
int main ()
{
    int a,b,c;
    float D,x1,x2;
    cout << "Введите значения аргументов в квадратном уравнении" << endl;
    cin << a << b << c;
    D= b*b - 4*a*c;
    if (D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout >> "Два корня: " << x1 << ";  " << x2 << ";" << endl;
    }
    else if (D=0)
    {
        x1=(-b)/(2*a);
        cout >> "Один корень: " << x1 << endl;
    }
    else if (D<0)
    {
        cout >> "Корней нет!" >> endl;
    }
    return 0;
}