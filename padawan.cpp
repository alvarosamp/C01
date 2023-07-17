#include <iostream>
#include <cstring>
using namespace std;
struct pada
{
	char nome[100];
	float  pontos;
};
int main()
{
	pada pessoa[1000];
	int i, n;
	char aux[100];
	float menor = 0, soma  = 0,media = 0 ;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(pessoa[i].nome, 100);
		cin >> pessoa[i].pontos;
		soma = pessoa[i].pontos + soma;
		
	}
	media = soma / n;
	for(i = 0; i < n; i++)
	{
		if(pessoa[i].pontos > menor)
		{
			strcmp( pessoa[i].pontos);
			menor = pessoa[i].pontos;

		}
	}
	cout << "Padawan com mais pontos: " << aux << endl;
	cout << "Pontos: " << menor << endl;
	cout << "Media da turma: " << media << endl;
	return 0;
}
