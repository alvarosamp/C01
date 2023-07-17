//DO while
#include <iostream>
using namespace std;
int main()
{
	int idade;
	do
	{
		cout << "Digite sua idade " << endl;
		cin >> idade;
		cout << "Idade = " << idade << endl;
	}
	while(idade >= 0);
}

//ira continuar no loop enquanto a condição do while for verdadeira.