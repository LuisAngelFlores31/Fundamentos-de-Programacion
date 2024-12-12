
	//Luis Angel Flores Salazar 24041174

#include<iostream>
using namespace std;
double ctof(double centi);
double ftoc(double fahr);
int main()
{
	double temperatura;
	int opcion;
	cout<<"Ingresa una temperatura: ";
	cin>>temperatura;
	cout<<"Seleccione la opcion deseada: \n";
	cout<<"1. Centigrados a Fahrenheit\n";
	cout<<"2. Fahrenheit a Centigrados\n";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			cout<<temperatura<<" grados Centigrados son "<<ctof(temperatura)<<" grados Fahrenheit.\n";
			break;
		case 2:
			cout<<temperatura<<" grados Fahrenheit son "<<ftoc(temperatura)<<" grados Centigrados.\n";
			break;
		default :
			cout<<"Opcion no valida.\n";
			break;
	}
	return 0;
}
double ctof(double centi)
{
	return(centi*9/5)+32;
}
double ftoc(double fahr)
{
	return(fahr-32)*5/9;
}
