#include <iostream>
using namespace std;

int main()
{
    int a,b;
    float P;
    cout << "Введите два числа для деления" << a << b;
    cin >> a >> b;
    if(b == 0)
    {
        cout << "Делить на ноль нельзя!"
    }    
    else
    cout << a/b << endl;
    return 0;
}