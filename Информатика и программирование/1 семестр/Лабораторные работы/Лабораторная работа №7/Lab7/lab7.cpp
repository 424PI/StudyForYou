#include <cstdlib>
#include <iostream>

using namespace std;
int min(int a1, int a2, int a3)
//  Тип возвращаемого результата - целый, формальные аргументы - три 
// целых числа a1,a2,a3. 
 {
   int m = a1;
   if (m>a2) m = a2;
   if (m>a3) m = a3;
   return m; // возвращение результата с помощью оператора return
 }

int main(int argc, char *argv[])
{
      system("chcp 1251");
      int  x,y,z;
      printf("Введите значение x - ");
      scanf("%d",&x);
      printf("Введите значение y - ");
      scanf("%d",&y);
      printf("Введите значение z - ");
      scanf("%d",&z);
      int k = min(x,y,z); // вызов функции с реальными аргументами x,y,z. 
      // переменной k присваивается возвращаемое значение
      printf("\n Минимальное значение - %d \n",k);
      system("PAUSE");
      return EXIT_SUCCESS;
}
