#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int count = 0;
		for (int i = n; i > 0; i--)
		{
			for (int l = 0; l < i; l++)
			{
				int c = 0;
				for (int k = 0; k < n; k++)
				{
					if (arr[l] > arr[l + 1])
						c++;
				}
				if (c == n)
					count++;
			}
		}
		cout << count;
	}
	return 0;
}

