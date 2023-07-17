#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x, soma ;
	int aux, i;
	aux = 0;
	soma = 0;
	for(i = 0; i < 6; i++)
	{
		cin >> x;
		if(x > 0)
		{
			aux++;
			soma = soma + x;

		}
	}
	cout << aux << " valores positivos" << endl;
	cout<<fixed<<setprecision(1);
	cout << soma / aux << endl;
	return 0;
}
