#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nome1[50];
	char nome2[50];
	strcpy(nome1, "Bianca");
	strcpy(nome2, "Ana");
	int result = strcmp(nome1, nome2);
	cout << "result" << result << endl;

	return 0;
}
