
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);	
	
	int x,y=1;
	cout<<"Lectura de 5 numeros enteros usando do while\n";
	do{
		cout<<"Dame un numero que no sea 0 (intento #)"<<y<<"\n";
		cin>>x;
		if(x==0)
			continue;
		y++;	
	  }while (y<6);
	  system("pause");
	  system("cls");
	  /*------------------------------------------------------------*/
	  cout<<"Lectura de 5 numeros enteros usando un for estándar\n";
	  for(y=1;y<6;y++)
	  {
	  	cout<<"Dame un numero que no sea 0 (intento #)"<<y<<"\n";
	  	cin>>x;
		if(x==0)
			continue;
		cout<<"Por aqui pasa solo cuando el numero es diferente de 0\n";	
	  }
	return 0;
} 