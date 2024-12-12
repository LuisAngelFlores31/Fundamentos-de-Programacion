
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	//
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float precio, desc, to, to2;
	cout<<"Dime el Precio del Producto: ";
	cin>>precio;
	cout<<"Cual es el Descuento del Producto: ";
	cin>>desc;
	
	cout<<"\n";
	
	to=desc*precio/100;
	to2=precio-to;
	cout<<"El Descunto del Producto es: "<<to<<"\n";
	cout<<"El Producto con Descuento es: "<<to2;
	return 0;
}
