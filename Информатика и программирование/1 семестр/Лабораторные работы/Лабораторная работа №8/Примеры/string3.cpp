#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    char dest[200];
    printf("������� ������ ��������: ");
    gets(dest);
    int k = 0;
    for(int i=0;i<strlen(dest);i++)
            {
             if(isalpha(dest[i])==0) k++;
             }
             printf("���������� �������� ������, �� ���������� ������� - %d\n",k);
    system("PAUSE");
    return EXIT_SUCCESS;
}
