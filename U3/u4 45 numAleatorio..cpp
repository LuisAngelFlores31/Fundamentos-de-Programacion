
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
#include<time.h>
using namespace std;
int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);	
	
	int precio,x;
	srand(time(0));
	precio=rand()%101; //Genera un numero aleatorio entre 0 y 100
	do{
		cout<<"Dime el precio: "; 
		cin>>x;
		if(x>precio)
			cout<<"Muy arriba\n";
		else
			if(x<precio)
				cout<<"Muy abajo\n";
			else
				cout<<"Acertaste, el precio es: "<<precio;
			
	}while(x!=precio);
	return 0;
} 