#include <stdio.h>
#include<stdlib.h> // esto por la libreria conio.h
#include<windows.h>

using namespace std;

//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
    system("cls");   // esto es por el clrscr();
    gotoxy(20,10);
    printf ("estoy aqui\n");
    
    system("PAUSE");
    return 0;
}
