//VETOR COMEÇA NA POSIÇAO 0

#include <iostream>
using namespace std;
int main(){
//	int idade[5];//VETOR GUARDA APENAS 5 ELEMENTOS INTEIROS,MAS PODE TROCAR O NEGOCIO DO INT
	
   //PARA ATRIBUIR VALORES;
	int idade[5];
	idade[0] =12;
	idade[1] = 32;
	idade[2] = 43;
	idade[3] = 30;
	idade[4] = 100;
	for(int i = 0; i < 5; i++)
	{
	cout<<idade[i]<<endl;//IMPRIMINDO OS VALORES DOS VETORES
	}
	
	//VETOR COMEÇA NA POSIÇAO 0

{
//	int idade[5];//VETOR GUARDA APENAS 5 ELEMENTOS INTEIROS,MAS PODE TROCAR O NEGOCIO DO INT

	//PARA ATRIBUIR VALORES;
	int idade[5];
	for(int i = 0 ; i < 5; i++)//ENTRANDO COM OS VALORES DO VETORES
	{
		cin >> idade[i];
	}
	for(int i = 0 ; i < 5; i++)
		cout << idade[i] << endl; //IMPRIMINDO OS VALORES DO VETOR



	return 0;
}

	
	
	
	return 0;
}