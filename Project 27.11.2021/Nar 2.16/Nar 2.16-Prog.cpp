#include <iostream>
using namespace  std;
int main ()
//Программа для кратных Z
{   
    int n,z,s=0;
    cout << "Введите желаемое число: " << endl;
    cin >> n;
    cout << "Введите число, которому будет кратны цифры" << endl;
    cin >> z;
    for (int i = 1; i <= n; i++)
    {
        if (i % z == 0)
        {
            s += i;
        }
    }
    cout << "Сумма цифр, кратных числу " << z << ": " << s << endl;
    return 0;
}

//Программа для вычисления суммы S=-1+2-3+4-5+6... до N
{
    int n,s=0;
    cout << "Введите желаемое число" << endl;
    cin >> n;
     for (int i = 1; i <= n; i++)
     {
         if (i % 2 == 0)
         {
             s += i;
         }
     }
    cout << "Сумма, соблюдающая условие: " << s << endl;
    return 0;
}