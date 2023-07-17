#include <iostream>
#include <cmath>
using namespace std;
float calc_delta(float a, float b, float c)
{
	float media;
	media = (pow(b, 2)) - 4 * a * c;
	return media;


}
int main()
{
	float a , b, c, res = 0;
	cin >> a >> b >> c;
	if(a > 0)
	{
		res = calc_delta(a, b, c);
		cout <<"delta = " <<res << endl;


	}

	return 0;
}
