
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
	int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, c=0;
	float sueldo, total;
	char opcion,nombre[10];
	while(c!=0)
	{
		cout<<"Esto nunca se imprime";
	}
	
	x=1;
	while(x<11)
	{
		cout<<x<<"\n";
		x++;
	}
	system("pause");
	
	opcion='s';
	while(opcion=='s' or opcion=='s')
		{
		system("cls");
		cout<<"Dame tu nombre: "; 	fflush(stdin); gets(nombre);
		cout<<"Dame tu sueldo: "; cin>>sueldo;
		total+=sueldo; //Es lo mismo que total=total+sueldo;
		printf("Desea capturar otro empleado <<s/n>>? ");
		cin>>opcion;//variacion
		}	
		printf("Total de salarios= $%5.2f\n",total);
		cout<<"Despues de la pausa el programa se cicla\n";
		system("pause");
		x=0;
		while(x<10);
		{
			cout<<x<<"\n";
			x++;
		}
	return 0;
} 
