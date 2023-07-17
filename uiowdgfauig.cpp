#include <iostream>
using namespace std;
struct aluno
{
	//nome,matriucula,notas
	float notas;
	int mat;
	char nome[50];
};
int main()
{
	aluno alunos[50];
	int n,i, j,menor,pos;
	float soma;
	cin >> n >> j;
	for(i = 0; i < n; i++)
	{
		cin.getline(aluno[i].nome);
		cin >> alunos[i].mat;
		cin >> alunos[i].notas;
		if(i == 0)
		{


			menor = alunos[i].notas;
			pos = i;
		}
		if(alunos[i].notas<menor){
			menor = alunos[i].notas;
			pos = i;
		}
		soma =+ alunos[i].notas;
	}
	cout<<fixed<<setprecision(2);
	cout<<"media"<<soma/n<<endl;
	cout<<alunos[pos].nome<<endl;
	cout<<alunos[j-1].nome<<"  "<<alunos[j-1].matricula<"  "<<alunos[j-1].notas<<endl
		return 0;

	}
