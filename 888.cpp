#include <iostream>
using namespace std;
int main()
{
	int x, y, media;
	do
	{
		cin >> x;
		if(x >= 0 && x <= 10 )
		{
			cin >> y;
			if(y >= 0 && y <= 10 )
			{

				media = (x + y) / 2;
				cout << "media = " << media << endl;
			}
		}
		else
		{
			cout << "nota invalida" << endl;
			break;
		
		}
	}
	while((x >= 0) || (x <= 10) || (y >= 0) || (y <= 10));
	return 0;
}
