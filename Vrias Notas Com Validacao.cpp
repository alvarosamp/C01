#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int escolha;
	double a, b;

	do
	{
		cin >> a ;
		
		while (a < 0 || a > 10)
		{
			cout << "nota invalida" << endl;
			cin >> a;
		}
		
		cin >> b;
		
		while (b < 0 || b > 10)
		{
			cout << "nota invalida" << endl;
			cin >> b;
		}
		cout<<fixed<<setrecision(2);
		cout << "media = " << 1.0*(a + b) / 2 << endl;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		
		cin >> escolha;
		
	} while (escolha == 1);
			
	return 0;
}
