#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = 0, b = 1;
	if (n == 1)
		cout << 0 << " ";
	else {
		cout << 0 << " " << 1 << " ";
		for (int i = 1; i < n - 1; i++)
		{
			int fib = a + b;
			a = b;
			b = fib;
			cout << fib << " ";


		}
	}
	return 0;
}

