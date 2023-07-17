#include <iostream>
#include <cstring>
using namespace std;
struct dado
{
	char nome[50];
	int idade;
	float peso;
   cin>>idade>>peso;
};
int main()
{
	dado atleta;//atleta é uma variavel do tipo dado
	strcpy(atleta.nome,"Neymar Jr");
    atleta.idade = idade;
    atleta.peso = peso;
    cout<<"Nome : " << atleta.nome<<endl;
    cout<<"Idade : "<<atleta.idade<<endl;
    cout<<"Peso : " <<atleta.peso<<endl;
	return 0;
}
