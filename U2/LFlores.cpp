#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	

	//Luis Angel Flores Salazar 24041174
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char equipo[80];
	int pg, pe, pp, tpar, totalPuntos, tpd, tpg;
	float pct;
	
	puts("Dime el nombre del equipo: ");
	gets(equipo);
	cout<<"Cuantos Partidos Gano el Equipo? ";
	fflush(stdin);
	cin>>pg;
	cout<<"Cuantos Partidos Empato el Equipo? ";
	fflush(stdin);
	cin>>pe;
	cout<<"Cuantos Partidos Perdio el Equipo? ";
	fflush(stdin);
	cin>>pp;
	
	cout<<"\n";
	
	tpar=pg+pe+pp;
	tpd=tpar*3;
	tpg=(pg*3)+pe;
	pct=(tpg*100)/tpd;
	
	cout<<"El Nombre del Equipo es: "<<equipo<<"\n";
	cout<<"El Total de Partidos Jugados es: "<<tpar<<"\n";
	cout<<"El Total de Partidos Ganados es: "<<pg<<"\n";
	cout<<"El Total de Partidos Empatados es: "<<pe<<"\n";
	cout<<"El Total de Partidos Perdidos es: "<<pp<<"\n";
	cout<<"\n";
	cout<<"El Total de Puntos Ganados es: "<<tpg<<"\n";
	cout<<"Los Puntos en Juego son: "<<tpd<<"\n";
	fflush(stdin);
	cout<<"El Porcentaje es: "<<pct<<"%";
	
	return 0;
}
