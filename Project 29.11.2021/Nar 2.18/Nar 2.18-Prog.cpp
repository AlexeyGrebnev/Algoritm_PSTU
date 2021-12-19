#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    while (n>0)
    {
        k = n % 10;
        cout << k ;
        n = n /10;
    }
    cout << endl;
    return 0;
}