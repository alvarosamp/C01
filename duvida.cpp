#include <iostream>
using namespace std;
int main()
{
	double x, y, media;

	do
	{
		cin >> x;
	}
	while((x >= 0) || (x <= 10));
	do
	{
		cin >> y;

	}
	while((y >= 0) || (y <= 10));+
	media =  (x + y) / 2;
	return 0;
}
