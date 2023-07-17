#include<iostream>
using namespace std;
int main()
{
	int x;
	int p, t , s;
	cin >> x;

	if(x == 1)
		cout << 0 << endl;
	else if(x == 2)
		cout << 0 << " " << 1 << endl;

	else
	{
		cout << 0 << " " << 1 << " ";
		p = 0;
		s = 1;
		t = p + s;
		cout << t << " ";
		for(int i = 3 ; i < x  ; i++)
		{
			p = s ;
			s = t;
			t = p + s;
			cout << t << " ";
		}
	}

	return 0;
}
