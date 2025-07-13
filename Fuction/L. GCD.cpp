#include <iostream>
using namespace std;
int main()
{
	int a, b,c=1,d=1,n;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int l = 1; l <= i; l++)
		{
			if (a % l == 0)
				c = l;
		}
		for (int k = 1; k <= i; k++)
		{
			if (b % k == 0)
				d = k;
		}
		if (c==d)
		{
			n = c;
		}
	}
	cout << n;
	return 0;
}

