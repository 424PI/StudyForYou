#include <cstdlib>
#include <iostream>

using namespace std;
int min(int a1, int a2, int a3)
//  ��� ������������� ���������� - �����, ���������� ��������� - ��� 
// ����� ����� a1,a2,a3. 
 {
   int m = a1;
   if (m>a2) m = a2;
   if (m>a3) m = a3;
   return m; // ����������� ���������� � ������� ��������� return
 }

int main(int argc, char *argv[])
{
      system("chcp 1251");
      int  x,y,z;
      printf("������� �������� x - ");
      scanf("%d",&x);
      printf("������� �������� y - ");
      scanf("%d",&y);
      printf("������� �������� z - ");
      scanf("%d",&z);
      int k = min(x,y,z); // ����� ������� � ��������� ����������� x,y,z. 
      // ���������� k ������������� ������������ ��������
      printf("\n ����������� �������� - %d \n",k);
      system("PAUSE");
      return EXIT_SUCCESS;
}
