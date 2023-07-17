#include <iostream>
using namespace std;
int main()
{
	int n, i;
	float X[100], Y[100];
	char op[100];
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> X[i];
	}
	for(i = 0; i < n; i++)
	{
		cin >> Y[i];
	}
	for(i = 0; i < n; i++)
	{
		char op[i];
	}

for(i = 0; i < n; i++)
{
	switch(op[i])
	{
	case '+':
		cout << X[i] << " + " << Y[i] << " = " << X[i] + Y[i] << endl;
		break;
	case '-' :
		cout << X[i] << " + " << Y[i] << " = " << X[i] - Y[i] << endl;
		break;
	case '*':
		cout << X[i] << " + " << Y[i] << " = " << X[i] * Y[i] << endl;
		break;
	case '/':
		cout << X[i] << " + " << Y[i] << " = " << X[i] / Y[i] << endl;

	}
}


return 0;
}

