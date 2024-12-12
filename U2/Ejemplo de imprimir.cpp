
	//Luis Angel Flores Salazar 24041174

#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char cad[80];
	string cad2;
	char c;
	puts("Dame una cadena (en realidad es  un arreglo)");
	puts(cad);
	puts("Ejemplo de impresion con puts");
	puts(cad);
	printf("Ejemplo de impresioncon printf: ");
	printf(cad);
	printf("\npresiona una tecla y continua automaticamente: ");
	
	getche();
	
	puts("\n");
	printf("Presina una tecla enter: ");
	getchar();
	
	printf("\npresiona una tecla y continua automaticamente: ");
	fflush(stdin);
	getch();
	putchar(c);
	std::cout << "Dame una cadena ahora con cin: ";
	std::cin >> cad;
	cout<<"\n La segunda cadena no tiene espacios: "<<cad;
	cout<<"\n Dame una cadena con espacios"
    fflush(stdin);	
	getline(cin,cad);
	cout << "La cadena es " << cad2 << " ya con espacios " << "\n";
	cout << "Captura de un arreglo con getline\n";
	getline(cin,cad);
	//cout<<"El arreglo es "<<cad<<"\n";
}
