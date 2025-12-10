#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long  min = 10e9;
		int n;
		cin >> n;
		long long arr[n];
		for (int l = 0; l < n; l++)
			cin >> arr[l];
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				long long sum = 0;
				sum = arr[i - 1] + arr[j - 1] + j - i;
				if (sum < min)
				{
					min = sum;
				}
			}
		}
		cout << min << endl;
	}
	return 0;
}