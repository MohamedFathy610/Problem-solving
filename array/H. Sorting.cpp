#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	//15 4 9 6 
	int min = 0;
	for (int l = 0; l < n; l++)
	{
		min = l;
		for (int j = l; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				swap(arr[j], arr[min]);

			}
		}
	}
	for (int z = 0; z < n; z++)
		cout << arr[z] << " ";
	return 0;
}

