#include <iostream>
#include <cstring>
using namespace std;
struct dado {
	char nome[50];
	int idade;
	float peso;
};
int main(){
	dado atletas[10];//atleta é uma variavel do tipo int
	int N,i; // # = numero -> # atletas
	cin>>N;// Lendo o numero de atletas
	for(i = 0; i <N ; i++)
	{
    cin.ignore();
	cin.getline(atletas[i].nome,50);
	cin>>atletas[i].idade;
	cin>>atletas[i].peso;
	}
	cout<<atletas[]
	return 0 ;
}