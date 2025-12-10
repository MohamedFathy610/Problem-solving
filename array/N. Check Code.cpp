
#include<iostream>
using namespace std;
int main()
{

	int a, b,count=0;
	cin >> a >> b;
	string x;
	cin >> x;
	if (x[a] == '-')
		count++;
	for (int i = 0; i < a; i++)
	{
		if (x[i] < '0' || x[i]>'9')
			count--;
	}
	for (int l = 1; l <= b; l++)
	{
		if (x[a+l] < '0' || x[a+l]>'9')
			count--;
	}
	if (count == 1)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}

