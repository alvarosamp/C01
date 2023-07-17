#include <iostream>
#include <cstring>
using namespace std;
struct nome {
	char nome[100];
	int base;
	
	
};
int main(){
	nome dado[100];
	int i , n ;
	char nome2[100];
	cin>>n;
	for(i = 0; i < n; i++)
	{
	cin.ignore();
	cin.getline(dado[i].nome,100);
	cin>>dado[i].base;
	}
	cin.getline(nome2,100);
	for(i = 0; i < n; i++)
	{
	  if(strcmp(nome2,dado))
	}
	
	return 0;
}