#include <iostream>
using namespace std;

int main()
{
    int max, a, b, c;
    a=1;
    b=0;
    c=3;
    if (a>b)
    {
    max=a;
    }
    else
    max=b;
    if (max < c)
    {
    max=c;
    }
    cout << "max = " << max << endl;    
    return 0;
}
