
	//Luis Angel Flores Salazar 24041174

#include<iostream>
#include <windows.h> //Necesario para configurar la consola windows
using namespace std;
int main()
{
	//Configurar la consola para que use UTF-8
	SetConsoleOutputCP(CP_UTF8);
	double valor = 123.456789;
	
	cout << fixed; //Establece el formato fijo una vez 
	cout.precision(2);
	cout << "Con 2 decimales: " << valor << endl; //is
	
	cout.precision(4);
	cout << "Con 4 decimales: " << valor << endl;
	
	cout.precision(6);
	cout << "Con 6 decimales: " << valor << endl;
	
	cout.unsetf(ios::fixed); //Desactiva fixed
	cout.precision(2);
	cout << "Con 2 digitos significativos: " << valor << endl; 
	cout << "Prueba de áéíóúíñ";
	return 0;
}
