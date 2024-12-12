
	//Luis Angel Flores Salazar 24041174

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);	
	
	int x,factorial;
	cout<<"Dime un numero para calcular su factorial\n";
	cin>>factorial;
	cout<<factorial;
	
	for(x=factorial-1;x>=1;x--)
	  {
	  	cout<<"X"<<x;
	  	factorial=factorial*x;
	  }
	  cout<<"="<<factorial;

	return 0;
} 