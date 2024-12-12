
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);	
	
	int x=1;
	int primerNum, segundoNum;
	
	cout<<"Adivina el numero: \n";
	cout<<"Dame un numero: ";
	cin>>primerNum;
	
	for(;x!=1000;x++)
	{
		printf("Adivina el numero: ");
		cin>>segundoNum;
		if(segundoNum==primerNum){
			cout<<"Felicidades, le atinaste";
		break;
		}
		else{
			if(segundoNum<=primerNum){
				puts("cercas, es mas arriba");
			}else{
				puts("Cercas, es mas abajo");
			}
		}
	}
	
	return 0;
} 