#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nome1[50];
	char nome2[50];
	char nome3[50];
	cin.getline(nome1, 50);
	cin.getline(nome2, 50);
	cin.getline(nome3, 50);
	if(strcmp(nome1 , "vertebrado") == 0)
	{
		if(strcmp(nome2, "ave") == 0)
		{
			if(strcmp(nome3, "carnivoro") == 0)
			{
				cout << "aguia" << endl;
			}
			else
			{
				cout << "pomba" << endl;
			}
		}
		else
		{
			if(strcmp(nome2, "mamifero") == 0)
			{
				if(strcmp(nome3, "onivoro") == 0)
					cout << "homem" << endl;
				else
				{
					cout << "vaca" << endl;
				}
			}
		}


	}
	else
	{
		if(strcmp(nome2, "inseto") == 0)
		{
			if(strcmp(nome3, "hematofago")==0)
				cout << "pulga" << endl;
			else
				cout << "lagarta" << endl;
		}
		else if(strcmp(nome2, "anelideo") == 0)
		{
			if(strcmp(nome3, "homatofago")==0)
			{
				cout << "sanguessuga" << endl;
			}
				 else
					 cout << "minhoca" << endl;

		}
	}

	return 0;
}



