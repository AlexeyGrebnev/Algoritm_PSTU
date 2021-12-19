#include <cmath>
#include <iostream>
using namespace std;
int main()
{
float n,a,max;
int kol = 1;
int i = 2;
cin >> n;
 max = sin(n+1/n); // Вычисляем первый
 while (i <= n)
 {
     a = sin (n + i/n);
     if (a > max)
     {
        max = a;
        kol = 1; //Обновляем счётчик из-за обновления max
     }
     else if (a == max) {kol++;}
     i++;
 }
 cout << "Максимальный: " << max << endl;
 cout << "Количество элементов с этим значением: " << kol << endl;
 return 0;
}