
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int numh, numm, total;
	float pcth, pctm;
	
	cout<<"Dime la Cantidad de Hombres Asistentes: ";
	cin>>numh;
	cout<<"Dime la Cantidad de Mujeres Asistentes: ";
	cin>>numm;
	total=numh+numm;
	cout<<"El Total de Asistentes es: "<<total<<"\n";
	pcth=numh*100/total;
	pctm=numm*100/total;
	cout<<"Hombres: "<<pcth<<"%"<<" Mujeres: "<<pctm<<"%";
	
	return 0;
}
