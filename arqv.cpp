// Bibliotecas
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ofstream arquivoS; // aequivo de saida

	arquivoS.open("SkyCode.txt");

	arquivoS << "Nome" << endl;
	arquivoS << "CPF" << endl;
	arquivoS << "Valor da conta" << endl;
	
	arquivoS.close();
	
	ifstream arquivoE; // arquivo de entrada
	
	string linha; // variavel para armazenar a linha lida
	
	arquivoE.open("SkyCode.txt");
	if(arquivoE.is_open()){
		while(getline(arquivoE, linha)){
			cout << linha << endl;
		}
		arquivoE.close();
	} else{
		cout << "Não foi possível abrir o arquivo" << endl;
	}
	
	return 0;
}'