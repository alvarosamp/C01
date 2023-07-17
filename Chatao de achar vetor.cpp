#include <iostream>
using namespace std;
int main()
{
	int vetor[100];
	int i = 0, n, x, aux = 0,aux2 = 0;
	cin >> n;
	while(n != 0)
	{
		vetor[i] = n;
		cin >> n;
		i ++;

	}
	cin >> x;
	for(aux = 0; aux < i; aux++)
	{
		if(vetor[aux] == x){
			cout << "Elemento " << x << " encontrado na posicao " << aux << endl;
			aux2=1;
	}
	
	}
	if(aux2 ==  0)
	{
		cout << "Elemento " << x << " nao foi encontrado" << endl;
	}
	
}

