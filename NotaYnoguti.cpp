#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int aux = 0 ;
	double x,soma = 0 , media = 0;
	do
	{
		cin >> x;
		if( x >= 0 && x <= 10)
		{
			soma = soma + x;
			aux++;
		}
		else
			cout << "Nota invalida" << endl;
	}
	while(aux != 2);
	media = soma / 2;
	cout << fixed << setprecision(2);
	cout << "media = " << media << endl;
	return 0;
}
