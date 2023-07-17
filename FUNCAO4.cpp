#include <iostream>
#include <cmath>
using namespace std;
int calc_a(int x)
{
	int conta1;
	int aux = 0;
	aux = pow(x,2);
	conta1 = (aux * 2) + (3*x) - 1;
	return conta1;
}
int calc_b(int x)
{
	int conta2;
	conta2 = (pow(x , 3));
	return conta2;
}
int calc_c(int y)
{
	int conta3;
	conta3 = (pow(y, 3));
	return conta3;
}
int main()
{
	int x, y, a, b, c;
	cin >> x >> y;
	a = calc_a(x);
	b = calc_b(x);
	c = calc_c(y);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
