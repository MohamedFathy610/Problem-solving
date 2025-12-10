
#include <iostream>
using namespace std;
int main()
{
	int x = 1;
	int n;
	cin >> n;
	int   arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int min = arr[0];
	for (int l = 0; l < n; l++)
	{
		if (arr[l] < min)
		{
			min = arr[l];
			x = l + 1;
		}
	}
	cout << min << " " << x;
	return 0;
}

