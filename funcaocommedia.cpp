#include <iostream>
#include <iomanip>
using namespace std;
float media(int notas[],  int nAlunos)
{
	int i;
	float somat = 0, soma;
	for(i = 0; i < nAlunos; i++)
	{
		somat = somat + notas[i];
	}
	soma = (float) somat / nAlunos;
	return soma;
}
int main()
{
	int notas[100];
	int i , nAlunos;
	float somamed;
	cin >> nAlunos;
	for(i = 0; i < nAlunos; i++)
	{
		cin >> notas[i];
	}
	somamed = media(notas, nAlunos);
	cout << fixed << setprecision(2);
	cout << "Media da turma = " << (float) somamed << endl;

	return 0;
}
