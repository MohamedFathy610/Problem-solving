#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long  arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long sum = 0;
	for (int l = 0; l < n; l++)
	{
		sum += arr[l];
	}
	if (sum > 0)
		cout << sum;
	else
		cout << -1 * sum;
	return 0;
}

