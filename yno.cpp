#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char op[100];
	cin.getline(op, 100);
	
	if(strcmp(op, "Rio de Janeiro") == 0)
		cout << "21" << endl;
	else if(strcmp (op, "Brasilia") == 0)
		cout << "61" << endl;
	else if(strcmp(op, "Sao Paulo") == 0)
		cout << "11" << endl;
	else if(strcmp(op, "Salvador") == 0)
		cout << "71" << endl;
	else if(strcmp(op, "Juiz de Fora") == 0)
		cout << "32" << endl;
	else if(strcmp(op, "Campinas") == 0)
		cout << "19" << endl;
	else if(strcmp(op, "Vitoria") == 0)
		cout << "27" << endl;
	else if(strcmp(op, "Belo Horizonte") == 0)
		cout << "31" << endl;
	else if(strcmp(op, "Santa Rita do Sapucai") == 0)
		cout << "35" << endl;
	else
		cout << "DDD nao encontrado" << endl;


	return 0;
}
