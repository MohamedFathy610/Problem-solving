#include <iostream>
using namespace std;
int main()
{
	int n,i=0;
	cin >> n;
	for (; i < n; i++)
	{
		int x;
		cin >> x;
		long long fectorial = 1;
		for (int l = 1; l <= x; l++)
		fectorial = fectorial * l;
		cout << fectorial<<"\n";
		

	}
	return 0;
}

