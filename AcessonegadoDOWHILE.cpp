#include <iostream>
using namespace std;
int main(){
	int x;
	do{ 
		cin>>x;
		if(x != 2002)
			cout<<"Acesso negado"<<endl;
		else 
			cout<<"Acesso permitido"<<endl;
	}
	while(x != 2002);	
	return 0;
}