
	//Luis Angel Flores Salazar 24041174

#include<stdio.h>
//#include<stdlib.h>
#include<iostream>
#include <windows.h> //Necesario para configurar la consola windows
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); //CONFIGURA LA SALIDA
	SetConsoleCP(CP_UTF8); //CONFIGURA LA ENTRADA
	
	char cad[80];
	int i,j,k;
	
	puts("Usando ScanF con Juegos de Inspeccion\n");
	puts("Dame una Cadena con espacios: ");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("Dame una Cadena de Mayusculas y Espacios");
	scanf("%[ ABCDE-Z]",cad);
	puts(cad);
	puts("Dame una Cadena de Mayusculas, Minusculas, Ñ/ñ y Espacios");
	fflush(stdin);
	scanf("%[ a-zA-ZÑñ]",cad);
	cout<<cad<<"\n";
	puts("Dame una Cadena que Tenga Cualquier Cosa y Termine con un Enter");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad); 
	
	puts("Dame 3 Números Enteros de Maximo 3 Cifras");
	scanf("%3d %3d %3d",&i,&j,&k);
	printf("%d %d %d",i,j,k);
	printf("\a");
	
	return 0;
}
