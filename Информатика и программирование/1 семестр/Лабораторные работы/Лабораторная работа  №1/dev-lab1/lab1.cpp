#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system ("chcp 1251");
    int x; // ����� �����
    float y; // ������������ �����
    printf("������� �������� ���������� x: "); // ����� �� ����� ������-�����������
    scanf("%d",&x); // ���������� ������ � ���������� �� ������ x
    y = x*x+3.1*x + 7.5;
    printf("�������� �������: %7.2f\n",y);
    printf("��������� �������� ������ ������ ���������\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
