
#include<iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;
	int arr[n];
	for (int k = 0; k < n; k++)
		cin >> arr[k];
	int max = arr[0], min = arr[0], ma = 0, mi = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			mi = i;
		}
		else if (arr[i] > max)
		{
			max = arr[i];
			ma = i;
		}
	}
	swap(arr[ma], arr[mi]);

	for (int z = 0; z < n; z++)
		cout << arr[z] << " ";

	return 0;
}

