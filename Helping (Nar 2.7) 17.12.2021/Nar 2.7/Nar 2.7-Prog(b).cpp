#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Введите длину стороны: " << endl;
    cin >> n;
    for (int i =1; i <= n; i++)
    {
        for (int i=1; i <= n; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


