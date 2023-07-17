#include <iostream>
using namespace std;

float mediana(int vetor[],int n){//mandar 2 informações,o vetor e e o seu tamanho
	if(n % 2 == 1)
		return vetor[n/2];//posiçao do vetor - > retornar a mediana do vetor
	else 
		return (float)(vetor[n/2] + vetor[n/2 - 1])/  2 ;
	
}
int main()
{
	int notas[10];
	int n, i;
	float m;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> notas;
	}
	m = mediana(notas, n);
	cout << "Mediana = " << m << endl;
	return 0;
}
