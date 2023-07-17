#include <iostream>
#include <iomanip>
using namespace std;
struct dados
{
	char nome[100];
	float pontos;
};
int main()
{
	dados dado[100];
	int i , n ;
	char n2[100];
	float soma = 0 , maior = 0000000, media = 0  ;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(dado[i].nome, 100);
		cin >> dado[i].pontos;
		soma = soma + dado[i].pontos;

	}
	for(i = 0; i < n; i++)
	{
		if(dado[i].pontos > maior)
		{
			maior = dado[i].pontos;
            cout<<"Padawan com mais pontos: "<<dado[i].nome<<endl;

		}
	}
	media = soma / n;
	cout <<"Pontos: "<<maior << endl;
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << media << " pontos" << endl;







	return 0;
}
