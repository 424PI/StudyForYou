#include <cstdlib>
#include <iostream>
#include <conio.h>
//Программа выводит на экран код нажатого символа (только для основной клавиатуры)
using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    system ("cls");
    puts("Вводите символ: (конец работа ESC)");
    char c;
    while((c = getch())!=27){
             printf("Символ %c код %d\n",c,c);
            }
    system("PAUSE");
    return EXIT_SUCCESS;
}
