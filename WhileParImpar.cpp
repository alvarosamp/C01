////while
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n != 0) //a condição de dentro do while tem que ser verdadeira
	{
		if(n % 2 == 0)
			cout << "EH PAR" << endl;
		else
			cout << "Impar" << endl;

		cin >> n;//no while a entrada entra na saída


	}
	return 0;
}
