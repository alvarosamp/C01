//ENTRANDO COM A QUANTIDADE DE CASAS NO VETOR.

#include <iostream>
using namespace std;
int main()
{
	int vetor[10];
	int n;
	cout<<"Qual é o numero de pessoas"<<endl;
	cin>>n;
	int i, maior = -999;
	int soma = 0;
	for(i = 0; i < n; i++)
	{
		cin >> vetor[i];
	}
	for(i = 0; i < n; i++)
	{
		if(vetor[i] > maior)
			maior = vetor[i];
		soma =(float) soma + vetor[i];
		
	}
	cout<<soma/i<<endl;//exibindo a media das idades
	cout << maior;
	return 0;
}
