//Первый вариант
#include <iostream>
using namespace std;
int main()
{
    int n;
    float x,y,p,fact,s;
    cin >> n >> x;
    fact = 1;
    s = 1 + x;
    for (int i = 2; i <= n; i++)
    {
        p=1;
        for (int j = 1; j <= i; j++)
        {
            p *= x;
        }
        fact *= i;
        s += (p/fact)
    }
    cout << sum << endl;
    return 0;
}

//Второй вариант написания
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n;
    float x,y,fact,s;
    cin >> n >> x;
    fact = 1;
    s = 1 + x;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
        s += pow (x,i) / fact; 
    }
    cout << s << endl;
    return 0;
}

