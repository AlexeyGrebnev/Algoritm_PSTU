#include <iostream>
using namespace std;
int main()
{
    float tmp, next;
    bool flag = false;
    cin >> tmp;
    while ( tmp != 0)
    {
        cin >> next; 
        if (next != 0 && tpm > next ) { flag = false; }
        tmp = next;
    }
    if (flag)
    {
        cout << "Последовательность упорядочена по возрастанию" << endl;
    }
    else 
    {
        cout << "Последовательность не упорядочена по возрастанию" << endl;
    }
    return 0;
}
