#include <iostream>
using namespace std;
int main()
{
	int b,a,floor,ceil;
	float  x,y;
	cin >> a >> b;
	floor = a / b;
	ceil = floor + 1;
	x = a % b;
	y = 10 * x / b;
	cout << "floor " << a << " / " << b << " = " << floor << endl;
	if (!(a==b))
	cout << "ceil " << a << " / " << b << " = " << ceil << endl;
	
	if (a==b)
		cout << "ceil " << a << " / " << b << " = " << floor << endl;
	if (y>=5)
		cout << "round " << a << " / " << b << " = " << ceil << endl;
	else 
		cout << "round " << a << " / " << b << " = " << floor << endl;

	return 0;
}
