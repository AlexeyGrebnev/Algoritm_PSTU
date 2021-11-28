#include <iostream>

using namespace std;

int main() 
{
	int n, space = n - 1, star = 1;
	cout << "Введите значение N: " << n << endl;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 1; j <= space; j++) 
		{
			cout << "  ";
		}
		space--;
		for (int j = 1; j <= star; j++) 
		{
			cout << "* ";
		}
		star += 1;
		cout << endl;
	}
	return 0;
}