#include <iostream>
using namespace std;
int main()
{
	int n, x = 0;
	cin >> n;
	
	
		for (int i = 1;; i++)
		{
			if (i % 4 == 0)
			{
				cout << "PUM" << endl;
				x++;
			}
			else
			{
				cout << i << " ";
			}
			if (x == n)
				break;
		}
	
	return 0;
}

