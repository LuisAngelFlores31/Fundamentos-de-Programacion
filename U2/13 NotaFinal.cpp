
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	//Respuestas de un Examen
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int rc, ri, rb, cf;
	cout<<"Las Respuestas Correctas Valen 5 Puntos c/u\n";
	cout<<"Las Respuestas Incorrectas Restan 1 Puntos c/u\n";
	cout<<"Las Respuestas en Blanco Valen 0 Puntos c/u\n";
	cout<<"Dime la Cantidad de Respuestas Correctas: ";
	cin>>rc;
	cout<<"Dime la Cantidad de Respuestas Incorrectas: ";
	cin>>ri;
	cout<<"Dime la Cantidad de Respuestas en Blanco: ";
	cin>>rb;
	
	cf=(rc*5)+(ri*(-1))+(rb*0);
	cout<<"La Calificacion Final es: "<<cf;
	printf("\nLa Calificacion Final es: %d",cf);
	
	cf=rc*5-ri;
	cout<<"\nLa Calificacion Final es: "<<cf;
	printf("\nLa Calificacion Final es: %d",cf);
	
	return 0;
}
