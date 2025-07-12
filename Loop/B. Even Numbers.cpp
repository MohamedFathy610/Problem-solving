#include <iostream>
using namespace std;
int main()
{
	int x = 2, y;
	cin >> y;
	while (y >= x)
	{
		cout << x << "\n";
		x++;
		x++;
	}
	if (y < 2)
		cout << -1;
	return 0;
}
