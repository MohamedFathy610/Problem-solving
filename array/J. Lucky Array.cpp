#include <iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;
	long long arr[n];
	for (int l = 0; l < n; l++)
		cin >> arr[l];
	long long min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	int count = 0;
	for (int k = 0; k < n; k++)
	{
		if (arr[k] == min)
			count++;
	}

	if (count % 2)
		cout << "Lucky";
	else
		cout << "Unlucky";

	return 0;
}