#include <iostream>
using namespace std;
int main()
{
	double x;
	int i;
	int tmp = 0;
	for( i = 0; i < 6; i++)
	{
		cin >> x;
		if(x > 0)
			//variavel auxiliar usada para somar a quantidadede vezes que o numero foi aceito
			tmp = tmp++;

	}
	cout << tmp<< " valores positivos"<<endl;
	return 0;
}
