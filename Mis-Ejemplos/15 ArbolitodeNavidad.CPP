/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Arbolito de Navidad
*/
#include <iostream>
#include <conio.h>//libreria para usar gotoxy
#include <cstring>
#include <windows.h>//libreria para usar Sleep
#include <stdio.h> 
#include <stdio.h>
#include<stdlib.h> // esto por la libreria conio.h
#include<windows.h>
#include<conio2.h>

using namespace std;

//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


//variable global para manejar el menu
int opcion;

//funcion para desplegar en pantalla arbol apagado
void arbolApagado()
{
 gotoxy(15,2);cout<<"\\|/"<<endl;
 gotoxy(14,3);cout<<"--+--"<<endl;
 gotoxy(15,4);cout<<"/|\\"<<endl;
 gotoxy(16,5);cout<<"X"<<endl;
 gotoxy(15,6);cout<<"X0X"<<endl;
 gotoxy(14,7);cout<<"X0X0X"<<endl;
 gotoxy(13,8);cout<<"X0X0X0X"<<endl;
 gotoxy(12,9);cout<<"X0X0X0X0X"<<endl;
 gotoxy(11,10);cout<<"X0X0X0X0X0X"<<endl;
 gotoxy(10,11);cout<<"X0X0X0X0X0X0X"<<endl;
 gotoxy(9,12);cout<<"X0X0X0X0X0X0X0X"<<endl;
 gotoxy(8,13);cout<<"X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(7,14);cout<<"X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(6,15);cout<<"X0X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(5,16);cout<<"X0X0X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(4,17);cout<<"X0X0X0X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(3,18);cout<<"X0X0X0X0X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(2,19);cout<<"X0X0X0X0X0X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(1,20);cout<<"X0X0X0X0X0X0X0X0X0X0X0X0X0X0X0X"<<endl;
 gotoxy(15,21);cprintf("|||  _%_");cout<<endl;
 gotoxy(15,22);cprintf("||| |___|");cout<<endl;
}




//funcion para encender estrella
void encenderEstrella()
{
 Sleep(100);
 textcolor(YELLOW);gotoxy(15,2);cprintf("\\|/");cout<<endl;
 Sleep(100);
 textcolor(RED);gotoxy(14,3);cprintf("--+--");cout<<endl;
 Sleep(100);
 textcolor(GREEN);gotoxy(15,4);cprintf("/|\\");cout<<endl;
 Sleep(100);
 textcolor(GREEN);gotoxy(15,2);cprintf("\\|/");cout<<endl;
 Sleep(100);
 textcolor(YELLOW);gotoxy(14,3);cprintf("--+--");cout<<endl;
 Sleep(100);
 textcolor(RED);gotoxy(15,4);cprintf("/|\\");cout<<endl;
 textcolor(YELLOW);
 gotoxy(15,2);cprintf("\\|/");cout<<endl;
 gotoxy(14,3);cprintf("--+--");cout<<endl;
 gotoxy(15,4);cprintf("/|\\");cout<<endl;
}

void pintarArbolVerde()
{
 textcolor(GREEN);gotoxy(16,5);cprintf("X");cout<<endl;
 gotoxy(15,6);cprintf("X X");cout<<endl;
 gotoxy(14,7);cprintf("X X X");cout<<endl;
 gotoxy(13,8);cprintf("X X X X");cout<<endl;
 gotoxy(12,9);cprintf("X X X X X");cout<<endl;
 gotoxy(11,10);cprintf("X X X X X X");cout<<endl;
 gotoxy(10,11);cprintf("X X X X X X X");cout<<endl;
 gotoxy(9,12);cprintf("X X X X X X X X");cout<<endl;
 gotoxy(8,13);cprintf("X X X X X X X X X");cout<<endl;
 gotoxy(7,14);cprintf("X X X X X X X X X X");cout<<endl;
 gotoxy(6,15);cprintf("X X X X X X X X X X X");cout<<endl;
 gotoxy(5,16);cprintf("X X X X X X X X X X X X");cout<<endl;
 gotoxy(4,17);cprintf("X X X X X X X X X X X X X");cout<<endl;
 gotoxy(3,18);cprintf("X X X X X X X X X X X X X X");cout<<endl;
 gotoxy(2,19);cprintf("X X X X X X X X X X X X X X X");cout<<endl;
 gotoxy(1,20);cprintf("X X X X X X X X X X X X X X X X");cout<<endl;
 textcolor(BROWN);gotoxy(15,21);cprintf("|||");textcolor(RED);cprintf(" _%_   ");cout<<endl;
 textcolor(BROWN);gotoxy(15,22);cprintf("|||");textcolor(RED);cprintf("|___|  ");cout<<endl;
}

void lucesMagenta()
{
 textcolor(MAGENTA);
 gotoxy(15,6);cprintf(" 0 ");cout<<endl;
 gotoxy(11,10);cprintf(" 0 0 0 0 0 ");cout<<endl;
 gotoxy(7,14);cprintf(" 0 0 0 0 0 0 0 0 0 ");cout<<endl;
 gotoxy(3,18);cprintf(" 0 0 0 0 0 0 0 0 0 0 0 0 0 ");cout<<endl;
}

void lucesAmarillas()
{
 textcolor(YELLOW);
 gotoxy(14,7);cprintf(" 0 0 ");cout<<endl;
 gotoxy(10,11);cprintf(" 0 0 0 0 0 0 ");cout<<endl;
 gotoxy(6,15);cprintf(" 0 0 0 0 0 0 0 0 0 0 ");cout<<endl;
 gotoxy(2,19);cprintf(" 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ");cout<<endl;
}

void lucesRojas()
{
 textcolor(RED);
 gotoxy(13,8);cprintf(" 0 0 0 ");cout<<endl;
 gotoxy(9,12);cprintf(" 0 0 0 0 0 0 0 ");cout<<endl;
 gotoxy(5,16);cprintf(" 0 0 0 0 0 0 0 0 0 0 0 ");cout<<endl;
 gotoxy(1,20);cprintf(" 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ");cout<<endl;
}

void lucesCyan()
{
 textcolor(CYAN);
 gotoxy(12,9);cprintf(" 0 0 0 0 ");cout<<endl;
 gotoxy(8,13);cprintf(" 0 0 0 0 0 0 0 0 ");cout<<endl;
 gotoxy(4,17);cprintf(" 0 0 0 0 0 0 0 0 0 0 0 0 ");cout<<endl;
}
void menuPrincipal()
{
	menu:
   arbolApagado();
	gotoxy(40,10);cout<<"Menu Principal"<<endl;
   gotoxy(40,11);cout<<"1. Encender Arbol"<<endl;
   gotoxy(40,12);cout<<"2. Salir "<<endl;
   gotoxy(40,13);cout<<"Seleccione una opcion: ";
	cin>>opcion;
   switch(opcion) 
   {
   	case 1:
      	encenderEstrella();
         opcion==1;
   		while(opcion<=5)
         {
   			pintarArbolVerde();
   			Sleep(300);
   			lucesMagenta();
   			Sleep(200);
   			lucesAmarillas();
   			Sleep(200);
   			lucesRojas();
   			Sleep(200);
   			lucesCyan();
   			Sleep(200);
      		encenderEstrella();
   			pintarArbolVerde();
   			Sleep(300);
   			lucesMagenta();
            Sleep(200);
   			lucesAmarillas();
   			Sleep(200);
   			lucesRojas();
   			Sleep(200);
   			lucesCyan();
   			Sleep(200);
   			lucesRojas();
      		Sleep(200);
     			lucesAmarillas();
   			Sleep(200);
      		lucesMagenta();
   			Sleep(200);
            opcion++;
    		}
         gotoxy(40,13);cout<<"Seleccione una opcion:  ";
         goto menu;
      break;
      case 2:
				system("cls");
            gotoxy(1,1);textcolor(GREEN);cprintf("--Feliz Navidad y prospero Año nuevo--");
            Sleep(1000);gotoxy(1,2);cout<<"5";
            gotoxy(1,1);textcolor(YELLOW);cprintf("--Feliz Navidad y prospero Año nuevo--");
				Sleep(1000);gotoxy(1,2);cout<<"4";
            gotoxy(1,1);textcolor(GREEN);cprintf("--Feliz Navidad y prospero Año nuevo--");
            Sleep(1000);gotoxy(1,2);cout<<"3";
            gotoxy(1,1);textcolor(YELLOW);cprintf("--Feliz Navidad y prospero Año nuevo--");
            Sleep(1000);gotoxy(1,2);cout<<"2";
            gotoxy(1,1);textcolor(RED);cprintf("--Feliz Navidad y prospero Año nuevo--");
            Sleep(1000);gotoxy(1,2);cout<<"1";
      break;
      default:
      	system("cls");
      	cout<<"Opcion seleccionada no valida saldra del programa"<<endl;
         Sleep(1000);gotoxy(1,2);cout<<"3";
         Sleep(1000);gotoxy(1,2);cout<<"2";
         Sleep(1000);gotoxy(1,2);cout<<"1";
      break;
   }
}

main()
{
	menuPrincipal();
}
