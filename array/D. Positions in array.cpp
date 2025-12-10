
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int   arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int l = 0; l < n; l++)
	{
		if (arr[l] <= 10)
			cout << "A[" << l << "] = " << arr[l] << endl;
	}
	return 0;
}

