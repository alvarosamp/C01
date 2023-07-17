#include <iostream>
using namespace std;
int main()
{
	int n;

	do
	{
		cin >> n;
		if(n >= 60)
			cout << "Passou" << endl;
		else
			cout << "Nao passou" << endl;
	}
	while(n >= 0);
	}
