//while
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int soma = 0;
	while (n != -1) //a condição de dentro do while tem que ser verdadeira
	{
		soma = soma + n;
		cin>>n;
	
	}
	cout<<"soma = "<<soma<<endl;// o resultado da soma so ira sair quando voce digitar
	// -1.
		return 0;
}
