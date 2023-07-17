#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void converte(float F, float &C, float &K){
	float cel,kel;
	cel = (5.0 /9.0)*(F  -32);
	kel = cel + 273;
	C = cel;
	K = kel;
	
}
int main(){
	float F , C , K;
	cin>>F;
	converte(F,C,K);
	cout<<fixed<<setprecision(2);
	cout<<"Celsius: "<<C<<endl;
	cout<<"Kelvin: "<<K<<endl;
	
	return 0;
}