
	//Luis Angel Flores Salazar 24041174

#include <iostream>
using namespace std;
void captura(char (&nombre)[10],int &num);
float calcula(int num);
int main(void)
{
	char nom[10];
	int num;
	float sueldo;
	captura(nom,num);
	sueldo=calcula(num);
	cout<<"El sueldo de "<<nom<<" es: ";
	printf("%.2f",sueldo);
	return 0;
}
void captura(char (&nombre)[10],int &num)
{
	puts("Dame el nombre del empleado");
	gets(nombre);
	puts("Dame el numero de pizas fabricadas");
	cin>>num;
}
float calcula(int num)
{
	return num*5.5;
	
}
