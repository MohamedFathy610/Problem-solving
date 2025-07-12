#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;

	for (; x != 1999;)
	{
		cout << "Wrong\n";
		cin >> x;
	}
	cout << "Correct";
	return 0;
}

