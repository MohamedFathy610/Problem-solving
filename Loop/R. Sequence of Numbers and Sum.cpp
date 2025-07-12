#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b,sum;
		cin >> a >> b;
		if ((a <= 0) || (b <= 0))
			break;
		if (a < b)
		{
			sum = 0;
			for (int i = a; i <= b; i++)
			{
				sum += i;
				cout << i << " ";
			}
		}
		else 
		{
			sum = 0;
			for (int i = b ; i <= a; i++)
			{
				sum += i;
				cout << i << " ";
			}
		}
		cout << "sum =" << sum << endl;
	}

	return 0;
}
