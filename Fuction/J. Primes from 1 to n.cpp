#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int l = 2; l <= n; l++)
	{
		int x = 0;
		for
			(int i = 2; i < l; i++)
		{
			if (l % i == 0)
				x ++;
		}
		if (x == 0)
			cout << l << " ";
		
	}

	return 0;
}

