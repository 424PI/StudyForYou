#include <cstdlib>
#include <iostream>
#include "arifm.h"
using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    printf("������� ��� �����: ");
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    // ����� ������� NOD. ���������� ��������� x,y �������� 
    //������������ m � n.
    printf("���������� ����� ��������: %d \n",NOD(n,m));
    // ����� ������� min. ���������� ��������� x,y �������� 
    //������������ m � n. ��������� ������ ������� ����
    // ������������ � ���� int.
    printf("����������� �����: %d \n",(int)min(n,m));
    // ����� ������� min. ���������� ��������� x,y �������� 
    //������������ m � n. ��������� ������ ������� ����
    // ������������ � ���� int.
    printf("������������ �����: %d \n",(int)max(n,m));
    system("PAUSE");
    return EXIT_SUCCESS;
}
