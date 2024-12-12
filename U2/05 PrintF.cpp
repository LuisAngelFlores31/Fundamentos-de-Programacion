
	//Luis Angel Flores Salazar 24041174

#include<stdio.h>
#include<iostream>
#include<windows.h> //Necesario para configurar la consola windows
//#include<conio.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); //CONFIGURA LA SALIDA
	SetConsoleCP(CP_UTF8); //CONFIGURA LA ENTRADA
	
	char c;
	char letras[20]="Hexadecimal";
	int i;
	float f;
	/*i=10;
	f=123.45;
	c='x';
	
	printf("Impresion Símple\n");
	printf("varchar=%c\n varint=%d\n varfloat=%f\n cadena=%s\n",c,i,f,letras);
	system("pause");
	
	printf("\n");
	printf("Impresion sin Espacios\n");
	printf("%d%f%c%s\n",i,f,c,letras);
	
    printf("\n");
	printf("Impresion con Etiquetas\n");
	printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s",i,f,c,letras);
	system("pause");
	
	printf("Dame un Entero: ");
	fflush(stdin);
	scanf("%d",&i);
	printf("Dame un Flotante: ");
	fflush(stdin);
	scanf("%f",&f);
	printf("Dame un Caracter: ");
	fflush(stdin);
	scanf("%c",&c);
	//cin>>c;
	//c=getchar();
	printf("Dame una Cadena: ");
	fflush(stdin);
	scanf("%[^\n]",letras);
	printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s",i,f,c,letras);
	*/
	i=12345;
	f=345.678;
	printf("Probando Diferentes Anchos en Enteros: 3, 5 y 8\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%3d %5d %8d\n",1,10,20);
	printf("%3d %5d %8d\n",i,i,i);
	printf("%d %d %d\n",1,10,20);
	system("pause");
	
	printf("Probando Diferentes Anchos en Flotantes: 3, 10 y 13 Espacios\n");
	printf("%3f %10f %13f\n",f,f,f);
	system("pause");
	
	printf("Probando Diferentes Anchos en Exp: 3, 13 y 16 Espacios\n");
	printf("%3e %13e %16e\n",f,f,f);
	system("pause");
	
	f=123.456;
	printf("Probando Diferentes Cantidades de Cifras 7.0, 7.3 y 7.1");
	printf("%7.0f %7.3f %7.1f\n",f,f,f);
	system("pause");
	
	return 0;	
}
