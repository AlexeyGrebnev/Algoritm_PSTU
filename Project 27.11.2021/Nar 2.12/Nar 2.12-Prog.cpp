#include <iostream>
using namespace std;
int main()
{
    int s,k,i,a,max=0, min=999;
    cout << "Введите значение k - желаемое кол-во цифр(чисел): ";
    cin >> k;
    cout << "Введите числа до 999 (кол-во = k): " << endl;
    for (i=1; i <= k; i++)
    {
        cin >> a;
        if (max < a)
        {
            max = a;
        }
        if (min > a )
        {
            min = a;
        }
    }
    s = min + max;
    cout << s << endl;
    return 0;
}