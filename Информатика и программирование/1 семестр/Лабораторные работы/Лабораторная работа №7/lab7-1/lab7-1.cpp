#include <cstdlib>
#include <iostream>
#include "arifm.h"
using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    printf("Введите два числа: ");
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    // Вызов функции NOD. Формальные аргументы x,y заменены 
    //фактическими m и n.
    printf("Наибольший общий делитель: %d \n",NOD(n,m));
    // Вызов функции min. Формальные аргументы x,y заменены 
    //фактическими m и n. Результат работы функции явно
    // преобразован к типу int.
    printf("Минимальное число: %d \n",(int)min(n,m));
    // Вызов функции min. Формальные аргументы x,y заменены 
    //фактическими m и n. Результат работы функции явно
    // преобразован к типу int.
    printf("Максимальное число: %d \n",(int)max(n,m));
    system("PAUSE");
    return EXIT_SUCCESS;
}
