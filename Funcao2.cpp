#include<iostream>
using namespace std;
int sinal(int n)
{
	if(n == 0)
		return 0;
	else if(n > 0)
		return 1;
	else
		return -1;
}
int main()
{
	int n;
	int valor;
	cin >> n;
	valor = sinal(n);
	if(valor == 0 )
		cout << "Zero";
	else if(valor > 0 )
		cout << "Positivo" << endl;
	else
	{
		cout << "Negativo" << endl;
	}



	return 0;
}
