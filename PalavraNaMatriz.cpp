#include <iostream>
using namespace std;
int main()
{
	char mat[100][100];
	int M, N;
	int i, j;
	int x = 0;
	char palavra[100];
	cin >> M >> N;
	cin >> palavra;
	for(i = 0; i < M ; i++)
	{
		for(j = 0; j < N; j++)
		{
			mat[i][j] = palavra[x];
			x++;
		}

	}
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			cout << mat[j][i];
		}
		



	
	}
		return 0;
}
