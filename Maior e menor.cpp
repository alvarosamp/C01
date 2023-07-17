#include<iostream>
using namespace std;

int main()
{
	int x, n, i,z;
	int menor =100000000000000;
	int maior = -1 ;
	// n = numero de numeros que sera usados
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> x;
		if(x > maior)
			maior = x;

	}
	for(i =0 ; i <n;i++){
		cin>>z;
		if (z<menor)
			menor = z;
	}
	
	cout <<"O maior valor e : "<< maior<<endl;
    cout <<"O menor valor e : "<< menor<< endl;
}