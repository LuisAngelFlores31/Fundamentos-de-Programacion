
	//Luis Angel Flores Salazar 24041174

#include<math.h>
#include <iostream>
#include<Windows.h>
using namespace std;
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int horaSalida, minSalida, segSalida, segInicial, segFinal;
	int segViaje, horaLlegada, minLlegada, segLlegada;
	
	cout<<"Dime la Hora de Salida: ";
	cin>>horaSalida;
	cout<<"Dime los Minutos de Salida: ";
	cin>>minSalida;
	cout<<"Dime los Segundos de Salida: ";
	cin>>segSalida;
	cout<<"Dime el Tiempo que Dura el Viaje (en Segundos): ";
	cin>>segViaje;
	segInicial=horaSalida*3600+minSalida*60+segSalida;
	segFinal=segInicial+segViaje;
	horaLlegada=trunc(segFinal/3600);
	minLlegada=trunc((segFinal%3600)/60);
	segLlegada=(segFinal%3600)%60;
	cout<<"Hora de Llegada: ";
	cout<<horaLlegada<<":"<<minLlegada<<":"<<segLlegada<<"\n";
	
	printf("Hora de Llegada: %02d:%02d:%02d",horaLlegada,minLlegada,segLlegada);
	
	
	return 0;
}
