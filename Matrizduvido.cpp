#include <iostream>
using namespace std;
int main()
{
	int mat1[10][10], mat2[10][10], mat3 [10][10];
	int  M, N, i , j; // contadores
	int soma = 0;
	cin >> M >> N;
	for(  i = 0; i < M; i++)
		for(j = 0; j < N; j++)
		{
			cin >> mat1[i][j];
		}
	for(  i = 0; i < M; i++)
		for(j = 0; j < N; j++)
		{
			cin >> mat2[i][j];
		}
	for(  i = 0; i < M; i++)
		for(j = 0; j < N; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		
		}
		  for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            cout <<mat3[i][j]<<" " ;
        }
        cout << endl;
    }

	return 0;
}
