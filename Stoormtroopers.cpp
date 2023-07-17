#include <iostream>
using namespace std;
struct stars
{
	int sold;
	float im, fa, media;

};
int main()
{
	int i = 0;
	int pos = 0;
	float aux = 0;
	stars alien[100];
	cin >> alien[i].sold;
	while(alien[i].sold != 0)
	{
		cin >> alien[i].im >> alien[i].fa;
		alien[i].media = ((alien[i].im + alien[i].fa) / 2);
		if(alien[i].media > aux)
		{
			aux = alien[i].media ;
			pos=+i;
		}
		i++;
		cin >> alien[i].sold;
	}
	cout << "Stormtrooper escolhido: " << alien[pos].sold << endl;
	cout << "GA = " << aux;




	return 0;
}
