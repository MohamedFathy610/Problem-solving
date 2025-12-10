
#include <iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;
	long long   arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int z = 0;
	int x = n / 2;
	for (int l = 0; l < x; l++)
		if (arr[l] == arr[n - l - 1])
			z++;
	if (z == x)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}

