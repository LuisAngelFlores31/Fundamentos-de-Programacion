
	//Luis Angel Flores Salazar 24041174

#include <iostream> //programa que suma vectores y matrices
#include<time.h>//random
#include <windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int r,vec[10];
	srand(time(0));
	printf("Maximice la pantalla y presione una tecla");
	getche();
	system("cls");
	for(r=0;r<215;r++){
		gotoxy(r,0);
		printf("*");
		gotoxy(r,60);
		printf("*");
	}
	for(r=0;r<100;r++){
		gotoxy(0,r);
		printf("*");
		gotoxy(79,r);
		printf("*");
	}
		
	return 0;				
}
