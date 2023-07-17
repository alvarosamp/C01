#include <iostream>
using namespace std;
//Void é uma funcao para padrao de entrada e saida.
void soma(int a , int b,int &s){// o retorno do resultado vai estar no int s;
	s=  a + b;
}
int main(){
	int x , y;
	int s = 0;
	cin>>x>>y;
    soma( x,y,s);
	cout<<"soma = "<<s <<endl;
	
	
	
	return 0;
}