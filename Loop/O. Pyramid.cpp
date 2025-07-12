#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i =1;i<=n;i++)
	{
		for (int l = 1; l <= i; l++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}

