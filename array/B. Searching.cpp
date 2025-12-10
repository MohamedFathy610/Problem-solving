#include <iostream>
using namespace std;
int main()
{
	int y = 0;
	int n;
	cin >> n;
	long long  arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long x;
	cin >> x;
	for (int l = 0; l < n; l++)
	{
		if (x == arr[l])
		{
			cout << l;
			y++;
			break;
		}
	}

	if (y == 0)
		cout << -1;
	return 0;
}

