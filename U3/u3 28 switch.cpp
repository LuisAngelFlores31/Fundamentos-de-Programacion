
	//Luis Angel Flores Salazar 24041174

#include <windows.h>
#include <iostream>
using namespace std;
int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char c;
	int opcion;
	cout<<"Dame un valor binario 0/1:\n";
	cin>>c;
	switch(c)
	{
		case '0':
		  cout<<"Falso o apagado\n";
		  break;
		case '1':
		  cout<<"Cierto o encendido\n";
		  break;
		default:
			cout<<"Teclaste un valor incorrecto\n";
	}
	
	system("pause");
	system("cls");
	printf("1.-QUIMICA\n");
	cout<<"2.-FISICA"<<"\n";
	printf("3.-MATEMATICAS\n");
	printf("4.-RECREO\n");
	printf("SELECCIONA UNA OPCION: ");
	cin>>opcion;
	switch(opcion)
	{
		case 1: printf("SELECCIONASTE QUIMICA");
		 break;
		case 2: printf("SELECCIONASTE FISICA");
		 break;
		case 3: printf("SELECCIONASTE MATEMATICAS");
		 break;
		case 4: printf("SELECCIONASTE RECREO");
		 break;
		default:
			printf("\aSELECCIONASTE UNA OPCION NO VALIDA");
	}
	
	return 0;
}