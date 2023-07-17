#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i, Nt;
	cin >> N;


	for(i = 1 ; i <= N; i++)
	{

		if(i % 2 == 0)
		{
			Nt = pow(i, 2);
			cout << i << "^2 = " << Nt << endl;
		}
	}





	return 0;
}
