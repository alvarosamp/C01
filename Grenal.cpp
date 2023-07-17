
#include <iostream>
using namespace std;
int main()
{
	int g1, g2 , escolha;
	int empate = 0;
	int gremio = 0;
	int inter = 0;
	int grenal = 0;
	do
	{
		cin >> g1 >> g2;
		grenal++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> escolha;
		if(g1 < g2)
			gremio++;
		else if(g1 > g2)
			inter++;
		else
		{
			empate++;
		}
	}
	while(escolha == 1);
	cout << grenal << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << empate << endl;
	if(inter > gremio)
		cout << "Inter venceu mais" << endl;
	else if(gremio > inter)
		cout << "Gremio venceu mais " << endl;
	else
	{
		cout << "Nao houve vencedor" << endl;
	}
	return 0;
}
