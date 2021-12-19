//Через введённые массивы
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[10];
    int count = 1; //Счётчик
    int max = -1; //Берём -1 для отбора чисел в положительной части ( от нуля )
    cout << "Введите положительные числа (от 0 до *бесконечности*):  ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            count = 1; // Обновляем счётчик максимальных элементов после нахождения нового максимума
        }
        else if (a[i] == max)
        {
            count++; //Добавляем к счётчику при столкновении со схожим max
        }

    }
    cout << "Максимальное значение: " << max << endl;
    cout << "Количество элементов с этим максимальным значением: " << count << endl;
    return 0;
}