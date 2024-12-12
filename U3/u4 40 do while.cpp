
	//Luis Angel Flores Salazar 24041174
	
#include <iostream>
#include<Windows.h>
using namespace std;
	void gotoxy(int x, int y ){
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	}
	
	int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, edad; char nom[10];
	//Se puede usar p/una cantidad prestablecida de vueltas 
	x=1;/*Si no se inicializa al menos se ejecuta una vez*/
	do
	{
		cout<<x<<"\n";
		x++;/*variacion*/
		}	while(x<10);/*condicion*/
		system("pause");
		/*Tambien se usa p/una cantidad desconocidas de vueltas*/
		system("cls");
	do
	{
		cout<<"Dame la edad, <<0 para terminar>>";
		cin>>x;//variacion	
		}	while (x!=0);
		system("pause");
		/*Se usa especialmente en menus y validaciones*/
	do
	{
		system("cls");
		gotoxy(10,10);cout<<"Menu Principal";
		gotoxy(10,11);cout<<"1.- Lee el nombre";
		gotoxy(10,12);cout<<"2.- Lee la edad";
		gotoxy(10,13);cout<<"3.- Imprime los datos";
		gotoxy(10,14);cout<<"4.- Terminar";
		gotoxy(10,15);cout<<"Seleccione una opcion <1-4>";
		do
		{
			gotoxy(30,10);
			cout<<"       ";
			gotoxy(30,10);
			cin>>x;
		}	while(x<0 or x>4);
		switch(x)
		{
			case 1:
				cout<<"Dame tu nombre: ";
				fflush(stdin);
				gets(nom);
				break;
			case 2:
				cout<<"Dame tu edad: ";
				cin>>edad;
				break;
			case 3:
				cout<<"Nombre: "<<nom<<"\n";
				cout<<"Edad: "<<edad<<"\n";
				system("pause");
		}
	}	while(x!=4);
	return 0;
} 
