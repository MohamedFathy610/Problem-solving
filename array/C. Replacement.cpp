#include <iostream>
using namespace std;
int main()
{
	int y = 0;
	int n;
	cin >> n;
	int   arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int l = 0; l < n; l++)
	{
		if (arr[l] > 0)
		{
			arr[l] = 1;
		}
		if (arr[l] < 0)
		{
			arr[l] = 2;
		}
	}
	for (int z = 0; z < n; z++)
		cout << arr[z] << " ";

	return 0;
}

