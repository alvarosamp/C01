#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
struct aluno
{
	int matricula;
	double nota1, nota2;
	double media;

};
int main()
{
	aluno aluno;
	cout << "Digite seu numero de matricula : " << endl;
	cin >> aluno.matricula;
	cout << "Digite a nota da sua primeira prova: " << endl;
	cin >> aluno.nota1;
	cout << "Digite a nota da sua segunda prova : " << endl;
	cin >> aluno.nota2;
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << fixed << setprecision(2);
	cout << "Nota da primeira prova: " << aluno.nota1 << endl;
	cout << "Nota da segunda prova: " << aluno.nota2 << endl;
	aluno.media = ((aluno.nota1 * 2) + (aluno.nota2  * 3)) / 5;
	cout << "Media: " << aluno.media << endl;

	return 0;
}
