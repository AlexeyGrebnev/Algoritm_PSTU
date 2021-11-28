#include <iostream>
using namespace std;
int main()
{
    int k,i,a,max=0;
    cout << "Введите желаемое кол-во цифр(чисел): ";
    cin >> k;
    cout << "Введите числа (кол-во = k): " << endl;
    for (i=1; i <= k; i++)
    {
        cin >> a;
        if (max < a)
        {
            max = a;
        }
    }
    cout << max << endl;
    return 0;
}