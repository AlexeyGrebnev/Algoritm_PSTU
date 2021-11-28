#include <iostream>
using namespace std;

int main()
{
    int n,k,s=0;
    cout << "Введите значение N" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k = 1;
        for (int j=1; j <= 2 * i; j++)
        {
            k *= j;
        }
        s += k;
    }
cout << s << endl;
return 0;
}
