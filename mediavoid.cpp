#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
void media(int x, int y, float &m){
	int z; 
	z = x * y;
	m = (double)sqrt(z);
	
}
int main(){
	int x ,y;
	float m ;
	cin>>x>>y;
	media(x,y,m);
	cout<<fixed<<setprecision(2);
	cout<<"Media = "<<m <<endl;
	
	
	return 0;
}