#include<iostream>
using namespace std;
float ideal(float h, char sexo)
{
	float pm;
	if(sexo == 'M')
	{
		pm = (72.7 * h) - 58;

	}
	else
		pm = (62.1 * h) - 44.7;
     return pm;
	}
	 int main()
{
	float h,massa;
	char sexo;
	cin >> h >> sexo;
	massa = ideal(h,sexo);
	cout<<"Peso ideal="<<massa<<"kg"<<endl;;

}
