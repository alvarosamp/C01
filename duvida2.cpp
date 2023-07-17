#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nome[50];
	int idade[50], i, n;
	cin >> n;
	cin.ignore();
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(nome, 50);
		cin >> idade[i];
		if(idade[i] >= 18)
		{
			cout << nome[i] << endl;
			cout << idade[i];
		}
	}
cout
}
