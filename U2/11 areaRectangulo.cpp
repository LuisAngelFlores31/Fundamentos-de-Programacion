
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	//Calcula Area y Perimetro de un Rectangulo
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float lado1, lado2, area, perimetro;
	cout<<"Dame la Medida del Lado 1: ";
	cin>>lado1;
	cout<<"Dame la Medida del Lado 2: ";
	cin>>lado2;
	area=lado1*lado2;
	perimetro=(lado1*2)+(lado2*2);
	//Impresion con Cout
	cout<<"El Área Mide: "<<area<<"\n";
	cout<<"El Perimetro es: "<<perimetro<<"\n";
	//Impresion con Printf
	printf("El Área Mide: %5.0f\n",area);
	printf("El Perimetro Mide: %5.2f",perimetro);
	
	return 0;
}
