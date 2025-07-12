#include <iostream>
using namespace std;
int main()
{
	int l = 0;
	long long x;
	cin >> x;
	int i = 2;
	for (; i < x; i++)
	{
		if (x % i == 0)
		{
			l = 1;
			break;
		}
	}
	if (l == 1)
		cout << "NO";
	else { cout << "YES"; }
	return 0;
}

