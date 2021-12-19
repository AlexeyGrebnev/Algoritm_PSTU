//Программа с полной работой и объяснением 

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    int n = 6;
    int key;
    // int arr[n];
    // int r, range_min, range_max;
    // range_min = 2;
    // range_max = 412;
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    int arr[n] = {5, 2, 4, 6, 1, 3};

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int j = 1; j < n; j++)
    {
        key = arr[j];
        cout << "Key: " << key << "\n";
        int i = j-1;
        cout << "Вошли в цикл\n";
        while (i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            cout << "Надо обмен!\n";
            cout << "Массив сейчас: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            i--;
        }
        cout << "Вышли из цикла\n";
        arr[i+1] = key;
        cout << "Массив сейчас: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

