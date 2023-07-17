#include <iostream>
using namespace std;
int main()
{
	float vetor[100];
	int n, i;
	float num;
	cin >> n;
	do
	{
		cin >> vetor[i];
	}
	while(vetor[i] != 0);
	cout << "Numero a ser procurado" << endl;
	cin >> num;
	while(vetor[i] == num)
	{
		if(vetor[i] == num)
			cout << "Elemento " << num << "encontrado na posicao" << i << endl;
		else
			cout << "Elemento " << num << "nao foi encontrado" << endl;
	}
	
	
	return 0;
}
