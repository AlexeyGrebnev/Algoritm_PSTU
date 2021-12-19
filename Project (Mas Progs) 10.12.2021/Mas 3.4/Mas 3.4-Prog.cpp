#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[5]; //Резервируем (5) массивов
    int max = 0;
    cout << "Введите положительные числа (от 0 до *бесконечности*):  " << endl;
    for (int i = 0; i < 5; i++) // i =0 мы берём, так как массивы отсчитываются от нулевого
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Максимальное значение: " << max << endl;
    return 0;
}