#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Введите длину катетов: " << endl;
    cin >> n;
    int star = n, space = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        space++;
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        star--;
        cout << endl;
    }
    return 0;
}
