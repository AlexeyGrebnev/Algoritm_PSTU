#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[10] { 1,2,6,8,3,2,5,8,5,3 };
    int max = 1;
    int min = 999;
    for (int i = 0; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        else if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Минимальное значение " << min << "; " << "Максимальное значение " << max << "; " << endl;
    return 0;
}