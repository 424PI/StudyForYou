#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    char dest[200];
    printf("������� ������ ��������: ");
    // ���� ������
    gets(dest);
    // ���������� ��� ������ ��������������� ������ buf.
    // ��������� ������ ��� ��������������� ������
    char *buf = new char [strlen(dest)+1];
    // �������� ������ dest � ������ buf
    strcpy(buf,dest);
    char *words;
    // ������� ���������� ����
    int k = 0;
    // �������� ������ �����
    char *temp = strtok(buf," ,;.!?-");
   // ��������� ��������� ����
    while (temp!=NULL)
     {
       temp = strtok(NULL," ,;.!?-");
       k++;
      }
    // ���� ������ �������� ���� �� ���� �����
    if (k){
     // �������� ������ ��� ������, ������� ����� �������
    // ��������� ������� ����
    words = new char[k+1];
    k = 0;
    // �������� ��������� ���� �����
    temp = strtok(dest," ,;.!?-");
    // �������� ������ ������ ������� ����������� ����� 
    // � ������ words. 
       words[k++] = temp[0];
      while (temp!=NULL)
       {
          temp = strtok(NULL," ,;.!?-");
          if (temp)
                words[k++] = temp[0];
        }
// ��������� �������� ���������� ������ �������� 
// ����-����������
 words[k] = '\0';
// ������� ������ �� �����
 puts(words);
 }
    system("PAUSE");
    return EXIT_SUCCESS;
}
