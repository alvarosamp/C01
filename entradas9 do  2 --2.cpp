//aprendendo entradas
//sempre comentar nas programa��e sdo ynoguti

#include <iostream>
//incluindo biblioteca para fazer diminuir e arredondar os numeros ap�s a ,
#include <iomanip>
using namespace std;
int main(){
	//Declara��o das vari�veis
	double x;
	double y;
	double produto;
	double divisao ; 
int resto ;
int a = 20;
int b = 3;
	// resto = %

//Atruibuindo entradas para x e y
cin>> x;
cin>> y;
	produto = x * y;
	divisao = x/y;
	//resto � sempre int -> lembrar que as vari�veis tem que ser int tamb�m
	resto = a % b;
	//Comando utilizado para arredondar e diminuir os n�meros ap�s a ,
	// com (0) = ele ira arredondar
		cout <<fixed<<setprecision(1);
	//Pendindo para o usu�rio digitar os valores
		cout << " digite o valor de x = " << x << endl;
	    cout << " digite o valor de y = " << y  << endl;
	    //mostrando o resultado do produto
		cout << " produto = " << produto << endl;
		//mostrando o resutlado da divis�o de x e y
		cout << " divisao = " << divisao<< endl;
		cout << " resto = " << resto << endl;
	
		
	
	
	
	return 0 ;
}