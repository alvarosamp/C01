#include <iostream>
using namespace std;
// n < 100000
int main()
{
	int N, X, i;
	cin >> N;
	if(N < 10000)
	{
		for( i = 0; i < N ; i ++)
		{
			cin >> X;
			if(X > -10000000 && X < 10000000)
			{
				if(X % 2 == 0 && X > 0)
					cout << "EVEN  POSITIVE" << endl;
				else if(X % 2 == 0 && X < 0)
					cout << "EVEN NEGATIVE" << endl;
				else if(X % 2 != 0 && X > 0)
					cout << "ODD POSTIVE" << endl;
				else if(X % 2 != 0 && X < 0 )
					cout << "ODD NEGATIVE" << endl;
				else
					cout << ("EVEN NULL") << endl;

			}
		}
	}
	return 0;

}
