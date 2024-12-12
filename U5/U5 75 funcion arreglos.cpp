
	//Luis Angel Flores Salazar 24041174

#include <iostream>
using namespace std;
void modificaArregloChar(char (&arregloChar)[5]);
void modificaArregloInt(int (&arregloInt)[5]);
int main()
{
	char arregloChar[]="Hola";
	int arregloInt[]={1,2,3,4,5};
	cout<<"Arreglo char original: "<<arregloChar<<"\n";
	cout<<"Arreglo int original: ";
	for(int i=0;i<5;i++)
		cout<<arregloInt[i]<<" ";
	cout<<"\n";
	modificaArregloChar(arregloChar);
	modificaArregloInt(arregloInt);
	cout<<"Arreglo char modificado: "<<arregloChar<<"\n";
	cout<<"Arreglo int modificado: ";
	for(int i=0;i<5;i++)
		cout<<arregloInt[i]<<" ";
	cout<<"\n";
	return 0;
}
void modificaArregloChar(char (&arregloChar)[5])
{
	for(int i=0;i<5;i++)
		arregloChar[i]='X';
}
void modificaArregloInt(int (&arregloInt)[5])
{
	for(int i=0;i<5;i++)
		arregloInt[i]*=2;
}
