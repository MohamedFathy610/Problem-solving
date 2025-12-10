#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string  x;
	cin >> x;
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += x[i] - '0';
	}


	cout << sum;
	return 0;
}

