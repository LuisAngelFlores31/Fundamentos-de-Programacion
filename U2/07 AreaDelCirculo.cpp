
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	//Calcula Area de Circunferencia
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float radio, area=0.0, circunferencia=0.0;
	const float PI=3.1416;
	cout<<"PI="<<PI<<"\n";
	//PI=0; //No se Puede Modificar una Constante
	
	cout<<fixed;
	cout.precision(4);
	cout<<"Dame el Radio del Circulo: ";
	cin>>radio;
	area=PI*radio*radio;
	circunferencia=PI*radio*2;
	cout<<"Usando Precision a 4 Decimales con Fixed\n";
	cout<<"Para un Circulo de radio: "<<radio<<"\n";
	cout<<"El Área es: "<<area<<"\n";
	cout<<"La Circunferencia es: "<<circunferencia<<"\n";
	
	cout<<"Usando Precision a 2 Decimales con printf\n";
	printf("Para un Circulo de radio: %5.2f\n",radio);
	printf("El Área es: %5.f\n",area);
	printf("La Circunferencia es: %5.2f\n",circunferencia);
	
	return 0;
}
