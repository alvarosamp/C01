#include <iostream>
using namespace std;
int main()
{
	int x, y;
	do
	{
		cin >> x >> y;
		if( x > 0)
		{
			if(y > 0)
				cout << "primeiro" << endl;
			else

				cout << "quarto" << endl;
		}
		else if( x < 0)
		{
			if(y > 0)
				cout << "segundo" << endl;
			else
				cout << "terceiro" << endl;
		}

	}
	while(x || y == 0);

	return 0;
}
