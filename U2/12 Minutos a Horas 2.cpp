
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	//Minutos a Horas 2
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int minutos, horas, min2;
	cout<<"Dame la Cantidad de Minutos a Convertir: ";
	cin>>minutos;
	horas=minutos/60;
	min2=minutos%60;
	cout<<minutos<<" Minutos Equivale a "<<horas<<":"<<min2<<"\n";
	printf("%2.0f Minutos Equivalen a %02.0f:%02.0f",minutos,horas,min2);
	
	return 0;
}
