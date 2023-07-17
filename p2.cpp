#include <iostream>
using namespace std;
int main(){
    float v1[100],v2[200];
    int i,n;
    char op[100];
    cin>>n;
    for(i = 0; i < n; i++)
	{
	 cin>>v1;
	}
	for(i = 0; i < n; i++)
	{
     cin>>v2;
	}
	for(i = 0; i < n; i++)
	{
		cin.ingnore();
	cin.getline(op,100);
	
	}
	for(i = 0; i < n; i++)
	{
	oper = v1[i] op[i] v2[i];
	}
	return 0;
}