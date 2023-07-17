#include <iostream>
using namespace std;
int main()
{
	int M,N,i,j;
	int mat[10][10];
	cin >> M >> N;
	for(i = 0; i <M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> mat[M][N];
			cout << mat[M][N] << "  ";
		}
		cout << endl;
	}



	return 0;
}
