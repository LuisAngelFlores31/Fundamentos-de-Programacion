
	//Luis Angel Flores Salazar 24041174

#include <iostream> //#include<stdio.h>
using namespace std;
int main( )
{
	char c[11]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
	int i=0;
	puts("Captura de una cadena");
	for(i=0;i<11;i++)
	{
		printf("Dame el elemento No. %d\n ",i);
		//cout<<"Dame el elemento No. "<<i;
		fflush(stdin);
		c[i]=getchar();//cin>>c[i];
	}
	puts("Impresion de la cadena");//cout<<"Impresion de la cadena";
	for(i=0;i<11;i++)
		printf("%c",c[i]);//cout<<c[i];
	system("PAUSE");
	system("CLS");
	puts("Conversion a mayusculas");//cout<<"Conversion a mayusculas";
	for(i=0;i<11;i++)
	{
		c[i]=toupper(c[i]);
		printf("%c",c[i]);
	}
	puts("\nConversion a minusculas");//cout<<"Conversion a minusculas";
	for(i=0;i<11;i++)
	{
		c[i]=tolower(c[i]);
		printf("%c",c[i]);
	}
	return 0;
}
