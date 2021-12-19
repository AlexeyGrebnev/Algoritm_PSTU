//Вариант Яруллина
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 float n,max;
 int i = 2;
 int posfirst = 1;
 int poslast = 1;
 cin >> n;
 max = sin (n+1/n); //Максимальное начинаем с первого, может быть и он максимальный
 while (i <= n)
 {
     a = sin (n + i/n);
     if (a > max)
     {
        max = a;
        posfirst = i;
        poslast = i;
     }
     else if ( a == max )
     {
        poslast = i;
     }
     i++;
 }
 cout << "Максимальное: " << max << endl;
 cout << "Первый элемент с этим значением: " << posfirst << endl;
 cout << "Последний элемент с этим значением: " << poslast << endl;
 return 0;
}