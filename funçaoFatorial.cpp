#include <iostream>
using namespace std;
int fatorial(int n)
{ 
	int f;
	int i;//contador
	f = 1;
	for( i = 1; i <= n  ; i++)
	{
		f *= i;
	}
	return f;
}
int main(){
	int fat;
	int n;
	cin>>n;
	fat = fatorial(n);
	cout<<fat<<endl;
}