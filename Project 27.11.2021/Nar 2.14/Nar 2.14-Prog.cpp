#include <iostream>
using namespace  std;
int main ()
{
    int n,s=0;
    cout << "Введите желаемое трёхзначное число" << endl;
    cin >> n;
    while (n > 0)
    {
        s += n % 10;
        n = n / 10;
    }
    cout << "Сумма цифр в заданном числе: " << s;
    return 0;
}


