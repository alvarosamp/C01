#include <iostream>
using namespace std;
float media(int x , int y)
{
	float media;
	media = ( x + y ) / 2;
	return media;
}
int main()
{
	int x, y;
	float res;
	cin >> x >> y;
	res = media(x, y);
	cout << res << endl;


	return 0;
}
