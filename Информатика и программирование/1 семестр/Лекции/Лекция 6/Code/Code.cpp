#include <cstdlib>
#include <iostream>
#include <conio.h>
//��������� ������� �� ����� ��� �������� ������� (������ ��� �������� ����������)
using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    system ("cls");
    puts("������� ������: (����� ������ ESC)");
    char c;
    while((c = getch())!=27){
             printf("������ %c ��� %d\n",c,c);
            }
    system("PAUSE");
    return EXIT_SUCCESS;
}
