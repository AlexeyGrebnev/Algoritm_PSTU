#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n, z, a;
    int i = 1;
    bool flag = false;
    cin >> n >> z;
    while ( i <= n && !flag) 
    {
        a = sin(n+i/n);
        a = round(a*10) / 10; //округление только для удобства проверки, это не часть алгоритма 
        if (a == z) { flag = true; }
        else { i++; } 
    }
    if (flag)
    {
        cout << "Элемент " << z << " найден. Его номер: " << i << endl;
    }
    else 
    {
        cout << "Элемент не найден!" << endl;
    }
    return 0;
}
