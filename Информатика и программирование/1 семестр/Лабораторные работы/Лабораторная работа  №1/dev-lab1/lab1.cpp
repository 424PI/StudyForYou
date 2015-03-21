#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system ("chcp 1251");
    int x; // целое число
    float y; // вещественное число
    printf("Введите значение переменной x: "); // вывод на экран строки-приглашения
    scanf("%d",&x); // считывание данных с клавиатуры по адресу x
    y = x*x+3.1*x + 7.5;
    printf("Значение функции: %7.2f\n",y);
    printf("Программу выполнил Иванов Андрей Сергеевич\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
