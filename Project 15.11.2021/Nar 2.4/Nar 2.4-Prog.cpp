#include <iostream>

using namespace std;

int main() 
{
	int n;
    cout << "Введите значение N" << endl;
	cin >> n;
	int space = n / 2, star = 1;
	for (int i = 1; i <= ((n + 1) / 2); i++) 
    {
		for (int j = 1; j <= space; j++) 
        {
			cout << "  " << endl;
		}
		space--;
		for (int j = 1; j <= star; j++) 
        {
			cout << "* " << endl;
		}
		star += 2;
		cout << endl;
	}
	return 0;
}