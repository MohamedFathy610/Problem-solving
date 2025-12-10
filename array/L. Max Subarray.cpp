
#include<iostream>
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
		for (int k = 0; k < n; k++)
			cin >> arr[k];

		for (int i = 0; i < n; i++)
		{
			for (int l = i; l < n; l++)
			{
				int max = -1e5;
				for (int r = i; r <= l; r++)
				{
					if (arr[r] > max)
						max = arr[r];
				}
				cout << max << " ";
			}

		}
		cout << endl;
	}

	return 0;
}

