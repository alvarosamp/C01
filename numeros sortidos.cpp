#include <iostream>
using namespace std;
int main()
{
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	if(x1 > x2 && x1 > x3)
	{
		if(x2 > x3)
			cout << x3 << "\n" << x2 << "\n" << x1 << endl;
		else if(x3 > x2)
			cout << x2 << "\n" << x3 << "\n" << x1 << endl;
	}
	if  (x2 > x1 && x2 > x3)
	{
		if(x1 > x3)
			cout << x3 << "\n" << x1 << "\n" << x2 << endl;
		else if(x3 > x1)
			cout << x1 << "\n" << x3 << "\n" << x2 << endl;
	}
	if(x3 > x2 && x3 > x1)
	{
		if(x2 > x1)
			cout << x1 << "\n" << x2 << "\n" << x3 << endl;
		else if(x1 > x2)
			cout << x2 << "\n" << x1 << "\n" << x3 << endl;

	}
	cout <<"\n"<< x1 << "\n" << x2 << "\n" << x3 << endl;

}
