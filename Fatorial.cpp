#include <iostream>
using namespace std;
int main()
{
	int x, soma = 1 ;
	cin >> x;
	for(int i = 1; i <= x  ; i++)
	{
		soma *= i;
	}
	cout << soma << endl;
	return 0;
}
