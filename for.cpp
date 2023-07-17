#include <iostream>
using namespace std;
int main()
{
	int i, x, n;
	int soma;
	float media;
	soma = 0;
	cin >> n;
	for(i = 0 ; i < n ; i++)
	{
		cin >> x;
		soma = soma + x;
	}
	media = (float) soma / n;
	cout << soma << endl;
	cout << media << endl;



	return 0;
}
