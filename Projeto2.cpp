//struct dados
#include <iostream>
#include <cstring>
#include <iomanip>
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
	ofstream arquivoS; // aequivo de saida
	arquivoS.open("SkyCode.txt");

	cin >> n;
	cin.ignore();
	// o n vai entrar la em cima com o numero de clientes?
	for(i = 0; i < n; i++)
	{
		cout << "Qual e o plano desejado ? " << endl;
		cin.getline(teste[i].x, 50);
		if(strcmp(teste[i].x, "Vivoselfie1") == 0) //condiçao criada para quando o plano for pre pago
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((119.20 * -10) / 100) + 119.20;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;

				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 119.20;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Vivoselfie2") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((139.99 * -10) / 100) + 139.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 139.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual1") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((54.99 * -10) / 100) + 54.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 54.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual2") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((64.99 * -.10) / 100) + 64.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 64.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual3") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((84.99 * -.10) / 100) + 84.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 84.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual4") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((139.99 * -.10) / 100) + 139.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 139.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual5") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((149.99 * -.10) / 100) + 149.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 149.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual6") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((149.99 * -.10) / 100) + 149.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 149.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual7") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((149.99 * -.10) / 100) + 149.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 149.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual8") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((179.99 * -.10) / 100) + 179.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 179.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Individual9") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((139.99 * -.10) / 100) + 139.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 139.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Familia1") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((249.99 * -.10) / 100) + 249.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 249.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Familia2") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((319.99 * -.10) / 100) + 319.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 319.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}

		}
		else if(strcmp(teste[i].x, "Familia3") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((429.99 * -.10) / 100) + 429.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 429.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
		else if(strcmp(teste[i].x, "Familia4") == 0)
		{
			cout << "Possui debito automatico" << endl;
			cin.getline(teste[i].debaut, 10);
			if(strcmp(teste[i].debaut, "sim") == 0)
			{
				teste[i].valor = ((529.99 * -.10) / 100) + 249.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}
			else
			{
				teste[i].valor = 529.99;
				cout << fixed << setprecision(2);
				cout << "R$ = " << teste[i].valor << endl;
				arquivoS << "Joao" << endl;
				arquivoS << "1949878" << endl;
				arquivoS << "O valor da sua conta foi de : R$" << teste[i].valor << "reais " << endl;
				arquivoS << endl;
			}


		}
	}
	arquivoS.close();
	return 0;
}
