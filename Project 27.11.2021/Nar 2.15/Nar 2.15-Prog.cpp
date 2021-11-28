#include <iostream>
using namespace  std;
int main ()
{
    int z,n,k;
    bool flag = false;
    cout << "Введите желаемое число: " << endl;
    cin >> n;
    cout << "Введите цифру, которую должна найти программа в заданном числе: " << endl;
    cin >> z;
    while (n > 0 && !flag)
    {
        k = n % 10;
        if (k == z)
        {
            flag = true;
            cout << "Цифра была найдена! - (easy)" << endl;
        }
        else 
        {
            n = n / 10;
        }
    }
    if (!flag)
    {
        cout << "Цифры " << z << " в числе " << n << " - нет !" << endl;
    }
    return 0;
}