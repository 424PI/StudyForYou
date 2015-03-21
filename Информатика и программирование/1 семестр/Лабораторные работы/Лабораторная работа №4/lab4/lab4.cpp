#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    int Sum=0, a, n, arr[100];
    printf("¬ведите количество членов последовательности не более 100 ");
    scanf("%d",&n);
    for(int i=0; i<n;i++)
       {
          printf("¬ведите значение a[%d] =>",i+1);
          scanf("%d", &a);
         arr[i]=a;
		if (arr[i]<0)   Sum+=arr[i];
       }
    printf("«начение суммы отрицательных членов последовательности %6d\n", Sum);
    system("PAUSE");
    return EXIT_SUCCESS;
}
