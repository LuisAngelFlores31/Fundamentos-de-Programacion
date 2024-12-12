
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;

	int esPrimo(int numero){
		if(numero <= 1){
			return 0;
	}
	for(int i=2; i<=numero/2;i++)
	{
		if(numero%i==0){
			return 0;
		}
	}
	return 1;
}
	
int main(){	
		int numero;
		cout<<"Ingresa un numero:";
		cin>>numero;
		
		if(esPrimo(numero)==1){
			cout<<numero<<" es primo"<<endl;
		} else {
			cout<<numero<<" no es primo"<<endl;
		}
	return 0;
} 