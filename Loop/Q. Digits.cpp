#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i=1;i<=n;i++)
	{
		long long x;
		cin >> x;
		if (x == 0)
			cout << 0 << " ";
		else
		{
			while (x != 0)
			{
				cout << x % 10 << " ";
				x /= 10;
			}
		}
		cout << "\n";
	}
	return 0;
}
