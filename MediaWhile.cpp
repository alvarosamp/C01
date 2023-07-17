#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n1, n2;
	double media = 0;
	int value;
	while(value==1)
	do
	{
		cin >> n1;
		if (n1 < 0 || n1 > 10)
			cout << "nota invalida" << endl;
	}
	while (n1 < 0 || n1 > 10);
	do
	{
		cin >> n2;
		if (n2 < 0 || n2 > 10)
			cout << "nota invalida" << endl;
	}
	while (n2 < 0 || n2 > 10);
	do{
		cout<<"novo calculo(1-sim 2-nao)"<<endl;
		cin>>value;
	}
	while(value!=1 && value!=2);
	media = (n1 + n2) / 2;
	cout << fixed << setprecision(2);
	cout << "media = " << media << endl;
	return 0;
}
