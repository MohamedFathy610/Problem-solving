#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long  arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			cout << 0;
			return 0;
		}
	}
	int c = 10000;
	for (int l = 0; l < n; l++)
	{
		int r = 0;
		while (arr[l] % 2 == 0)
		{
			r++;
			arr[l] /= 2;
		}
		if (r < c)
			c = r;
	}
	cout << c;
	return 0;
}