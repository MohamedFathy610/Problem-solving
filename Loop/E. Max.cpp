#include <iostream>
using namespace std;
int main()
{
	int n; 
	cin >> n;
	long long    x,max=0;
	for
		(int i = 0; i < n; i++)
	{
		cin >> x;
		if (x >= max)
			max = x;

	}
	cout << max;
	return 0;
}

