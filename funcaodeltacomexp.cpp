#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float calc_delta(float a, float b, float c)
{
	float media;
	media = (pow(b, 2)) - 4 * a * c;
	return media;


}
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	float delta, res = 0 ;
	int media ;
	delta = calc_delta(a, b, c);
	if(delta >= 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		return 0;
	}
	else
		return 1;


}
int main()
{
	float a , b , c , x1, x2;
	float s, res  = 0;;
	cin >> a >> b >> c;
	s = calc_raizes(a, b, c, x1, x2);
	res = calc_delta(a, b, c);
	if( s  == 0 )
	{
		if(b || c != 0  ){
			cout << fixed << setprecision(2);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		else
		{
		
			cout << "x = 0" << endl;
		}
	}
	else
	{

		cout << "Nao ha raizes reais" << endl;
	}

	return 0;
}
