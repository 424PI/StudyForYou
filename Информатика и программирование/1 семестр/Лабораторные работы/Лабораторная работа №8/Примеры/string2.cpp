#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    char dest[200];
    printf("������� ������ ��������: ");
    gets(dest);
    char *buf = new char [strlen(dest)+1];
    strcpy(buf,dest);
    // �������� ������ ����� ������
    char *temp = strtok(buf," ,;.!?-");
    // ������� ��� ����� �� ����� � ������������ ������
    int max = strlen(temp);
    char *strmax = new char[max+1];
    strcpy(strmax,temp);
    // �������� ����������� ����� � ���������� �� ��
    // ������ � ������������ ������
    while (1)
    {
          temp = strtok(NULL," ,;.!?-");
          if (!temp)break;
          if (max<strlen(temp))
                               {
	                            delete [] strmax;
	                            max = strlen(temp);
	                            strmax = new char[max+1];
	                            strcpy(strmax,temp);
                                } }
    printf("� ������ // %s // \n ����� � ������������ ������ // %s //",dest,strmax);
    printf("\n ��� ����� - %d",max);
    delete [] strmax;
    delete [] buf;
    system("PAUSE");
    return EXIT_SUCCESS;
}
