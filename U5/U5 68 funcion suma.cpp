
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include <windows.h>
using namespace std;
int sumar(int a, int b);
int main(void)
{
	int num1,num2;
	cout<<"Ingresa el primer numero: ";
	cin>>num1;
	cout<<"Ingresa el segundo numero: ";
	cin>>num2;
	int resultado=sumar(num1,num2);
	cout<<"El resultado de la suma es: "<<resultado<<'\n';
	cout<<"El resultado es: "<<sumar(num1,num2);;
	return 0;
}
int sumar(int a, int b)
{
	return a+b;
}
