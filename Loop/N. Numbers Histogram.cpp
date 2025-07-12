#include <iostream>
using namespace std;
int main()
{
	char z;
	int n;
	cin >> z >> n;
	for (int i=1;i<=n;i++)
	{
		int x;
		cin >> x;
		for (int l = 1; l <= x; l++)
			cout << z;
		cout << "\n";
	}

	return 0;
}

