#include <iostream>
using namespace std;
int main()
{
	int n, a, b, sum = 0, c = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		int x = i;
		c = 0;
		while (x)
		{

			int a = x % 10;
			c = c + a;
			x = x / 10;

		}
		if (c >= a && c <= b)
			sum = sum + i;
	}
	cout << sum;
	return 0;
}
