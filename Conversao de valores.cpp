#include <iostream>
using namespace std ;
int main(){
	// declara��o da vari�veis
int x,y;
double r;
//dando valor as vari�veis
x = 5;
y = 2;
r =x/y;
//nesse caso aplcicando desse modo o valor � apenas a vari�vel 2.
cout<<"r = "<< r <<endl;

//1� forma de converter o numero � : (sempre lembrar de colocar o double na resposta)
r = 1.0 * x/y;
cout<<"r = "<< r <<endl;

//2� forma de converter � :(forma amis forma de se usar
r = (double) x/y;
cout<<"r = "<< r <<endl;
	
return 0;	
}