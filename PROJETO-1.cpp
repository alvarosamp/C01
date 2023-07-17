//struct dados
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
struct dados
{
	char x[50];//x = plano
	char debaut[10];
	double valor;
	char op[50];
};
int main()
{
	dados teste[100];
	int   i , n;
	ofstream arq;
	cin >> n;
	cin.ignore();
	// o n vai entrar la em cima com o numero de clientes?
	for(i = 0; i < n; i++)
	{
		cout << "Qual e o plano desejado ?  Pre pago ou pos pago? " << endl;
		cin.getline(teste[i].x, 50);
		if(strcmp(teste[i].x, "pre pago") == 0) //condiçao criada para quando o plano for pre pago
		{
			cout << "Digite o numero referente ao plano" << endl;
			cout << "1 - Plano individual-> 40$" << endl;
			cout << "2 - Plano familia-> 30$" << endl;
			cin.getline(teste[i].op,50);
		
		
			}
		}
		if(strcmp(teste[i].x, "pos pago") == 0)
		{
			cout << "Plano 1 - 500mB ->20$" << endl;
			cin >> op;
			switch(op)
			{
			case 1://plano 1
				//Podemos colocar um IF dentro das case para calcular se é DEB.AUT ou nao
				cout << "teste 2 " << endl;
				// Logo o cliente ira ganhar ou nao o desconto
				break;
			}
		}
	}
//OUTRA POSSIBILIDE É COLOCAR O PREÇO DENTRO DA CASE ESCOLHIDA

	return 0;
}
