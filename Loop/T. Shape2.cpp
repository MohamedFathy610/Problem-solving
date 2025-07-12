#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int x = n, z = 1;
	while (x--)
	{
		int y = x;
		while (y--)
		{
			cout << " ";
		}
		for (int i=1;i<=z;i++)
		{
			cout << "*";
		}
		cout << endl;
		z += 2;
	}
	return 0;
}