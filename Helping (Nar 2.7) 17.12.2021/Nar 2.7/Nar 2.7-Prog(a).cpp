#include <cmath>
#include <iostream>
using namespace std;
int main()
{
int n,k;
cout << "Введите значение N (с цельновычисляющимся корнем):" << endl;
cin >> n;
k = sqrt(n);
for (int i=1; i <= k; i++)
{
    for (int i=1; i <= k; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
return 0;
}
