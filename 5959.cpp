//A entrada é composta por N pessoas, J, Nomes(maior tamanho 50), Matriculas, Notas. 
#include <iostream>
using namespace std;
struct dados
{
	//nome,matriucula,nota
	float nota;
	int mat;
	char nome[50];
};
int main()
{
	int i,n,esc;
	float media,soma = 0;
	dados  pessoa[50];
	cin>>n>>esc;
	for(i = 0; i < n; i++)
	{
	cin.ignore();
	cin.getline(pessoa[i].nome,50);
	cin>>pessoa[i].mat;
	cin>>pessoa[i].nota;
	soma =pessoa[i].nota+ soma;
	}
	media= soma/n;
	cout<<media<<endl;


	return 0;
}
