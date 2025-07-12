#include <iostream>
using namespace std;
int main()
{
	long long n,m,x=0;
	cin >> n;
	m = n;
	int l = 0,y;
	for (; m>  0;)
	{
		m = m / 10;
		l++;
	}
	m = n;
	for (int i = 0; i < l;i++)
	{
		y = m % 10;
		x = (10 * x )+ y;
		m=m / 10;
	}
	cout << x << endl;
	if (x == n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

