#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#define WIDTH 79
#define HEIGHT 22
using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    enum number {right=100,left=97,up=119,down=115};
    HANDLE hCon;
    CONSOLE_SCREEN_BUFFER_INFO SCRN_INFO;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hCon, &SCRN_INFO);
    int z;
    char c;
    puts("Введите символ: ");
    c = getc(stdin);
    system("cls");
    WORD wColor = FOREGROUND_RED;
    COORD cPos;
    
    cPos.Y = 0;
    cPos.X = 0;
    SetConsoleCursorPosition(hCon, cPos);
    putc(c,stdout);
    while ((z  = getch())!=27)                
        switch(z){
                  case right: if (cPos.X<WIDTH) {
                               SetConsoleCursorPosition(hCon, cPos);
                               wColor = FOREGROUND_GREEN;
                               putc(' ',stdout);
                               (cPos.X)++;
                               SetConsoleCursorPosition(hCon, cPos);
                               SetConsoleTextAttribute(hCon,wColor|FOREGROUND_INTENSITY);
                               putc(c,stdout);}
                               else {SetConsoleCursorPosition(hCon, cPos);
                               putc(' ',stdout);cPos.X = 0;} break;
                  case left: if (cPos.X>0) {SetConsoleCursorPosition(hCon, cPos);
                               wColor = FOREGROUND_BLUE;
                               putc(' ',stdout);
                               (cPos.X)--;
                               SetConsoleCursorPosition(hCon, cPos);
                               SetConsoleTextAttribute(hCon,wColor|FOREGROUND_INTENSITY);
                               putc(c,stdout);}
                               else {SetConsoleCursorPosition(hCon, cPos);
                               putc(' ',stdout);cPos.X = WIDTH-2;} break; 
                  case up: if (cPos.Y>0) {SetConsoleCursorPosition(hCon, cPos);
                               wColor = FOREGROUND_RED|FOREGROUND_BLUE;
                               putc(' ',stdout);
                               (cPos.Y)--;
                               SetConsoleCursorPosition(hCon, cPos);
                               SetConsoleTextAttribute(hCon,wColor|FOREGROUND_INTENSITY);
                               putc(c,stdout);}
                               else {SetConsoleCursorPosition(hCon, cPos);
                               putc(' ',stdout);cPos.Y = HEIGHT-2;} break; 
                  case down: if (cPos.Y<HEIGHT) {SetConsoleCursorPosition(hCon, cPos);
                               putc(' ',stdout);
                               wColor = FOREGROUND_RED;
                               (cPos.Y)++;
                               SetConsoleCursorPosition(hCon, cPos);
                               SetConsoleTextAttribute(hCon,wColor|FOREGROUND_INTENSITY);
                               putc(c,stdout);}
                               else {SetConsoleCursorPosition(hCon, cPos);
                               putc(' ',stdout);cPos.Y = 0;} break;                        
                  }
    system("PAUSE");
    return EXIT_SUCCESS;
}

