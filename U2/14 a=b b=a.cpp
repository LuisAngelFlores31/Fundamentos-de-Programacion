
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	//Cambiar a por b y viceversa
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int a,b,c;
	cout<<"Dame el Valor de a: ";
	cin>>a;
	cout<<"Dame el Valor de b: ";
	cin>>b;
	
	c=a;
	a=b;
	b=c;
	cout<<"a="<<a<<" b="<<b;
	
	return 0;
}
