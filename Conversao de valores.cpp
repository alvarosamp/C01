#include <iostream>
using namespace std ;
int main(){
	// declaração da variáveis
int x,y;
double r;
//dando valor as variáveis
x = 5;
y = 2;
r =x/y;
//nesse caso aplcicando desse modo o valor é apenas a variável 2.
cout<<"r = "<< r <<endl;

//1º forma de converter o numero é : (sempre lembrar de colocar o double na resposta)
r = 1.0 * x/y;
cout<<"r = "<< r <<endl;

//2º forma de converter é :(forma amis forma de se usar
r = (double) x/y;
cout<<"r = "<< r <<endl;
	
return 0;	
}