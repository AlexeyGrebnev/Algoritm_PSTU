#include <iostream>
using namespace std;

int main()
{
    int N; int S=0;
    cin >> N;
    while (N!=0)
    {
        S=S+N;
        N=N-1;
    }
    cout << S << endl;
    return 0;
}