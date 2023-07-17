#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int aux, i, x;
	aux = 0;

	for(i = 0; i < 5; i++)
	{
		cin >> x;
		if(x % 2 == 0)
			aux++;



	}
	cout << aux << " valores pares" << endl;
	return 0;
}
