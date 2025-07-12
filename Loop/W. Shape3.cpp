#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = n;
	int z = 1, a = 0;
	
	while (x--)
	{
		int y = x;
		while (y--)
			cout << " ";

		for (int i = 1; i <= z; i++)
			cout << "*";
		
		z += 2;
		cout << endl;
	}
	x = n;
	while (x--)
	{
		for (int l = 1; l <= a; l++)
			cout << " ";
		a++;
		int y = 2 * x + 1;
		while (y--)
			cout << "*";
		cout <<endl;
	}
	return 0;
}

