#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		long long x,y=0,z=0;
		cin >> x;

		while (x)
		{
			int a = x % 2;
			
			x = x / 2;
			if (a==1)
			{
				y = y + pow(2,z);
				z++;
			}
		}

		cout << y << endl;

	}
	return 0;
}

