#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x;
	double media;
	int  soma = 0;
	int aux = 0;
	do
	{
		cin >> x;
		if(x >= 0 && x <= 10)
		{
			soma = soma + x;
			aux++;
		}
		else
		{
			cout << "nota invalida" << endl;
		}
	}
	while(aux != 2);
	media = (double) soma / 2;
	cout << fixed << setprecision(2);
	cout << "media = " << media << endl;
	return 0;
}
