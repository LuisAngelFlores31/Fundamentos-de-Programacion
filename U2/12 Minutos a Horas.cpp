
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
#include<math.h>
using namespace std;
int main(){	
	//Minutos a Horas
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float minutos, horas, residuo, min2;
	cout<<"Dame la Cantidad de Minutos a Convertir: ";
	cin>>minutos;
	horas=trunc(minutos/60);
	residuo=(minutos/60)-trunc(minutos/60);
	min2=residuo*60;
	cout<<minutos<<" Minutos Equivale a "<<horas<<":"<<min2<<"\n";
	printf("%2.0f Minutos Equivalen a %02.0f:%02.0f",minutos,horas,min2);
	
	return 0;
}
