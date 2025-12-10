
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
	while (n)
		cout << arr[--n] << " ";
	return 0;
}

