#include <iostream>
using namespace std;
int main()
{
    int n,i=1,a;
    bool flag = false;
    cout << "Введите длину последовательности: " << endl;
    cin >> n;
    while ( i <= n && !flag)
    {
        cout << "Введите число: " << endl;
        cin >> a;
        if (a == 0) 
        {
            i = i++;
        }
        else {
                if ( a > 0 ) 
                {
                    flag = true;
                }
             }
    }
    if (flag=true)
    {
        cout << "Первое вводимое число - положительное" << endl;
    }
    else
    {
        cout << "Первое вводимое число - отрицательное" << endl;
    }
    return 0;
}