//СОРТИРОВКА ВЫБОРОМ

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n = 5;
    int tmp, min_index; //Индекс минимального элемента
    int arr[5] = { 5,2,0,4,3 };
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        //swap
        tmp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}