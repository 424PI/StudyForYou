#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    char dest[200];
    printf("Вводите строку символов: ");
    gets(dest);
    int k = 0;
    for(int i=0;i<strlen(dest);i++)
            {
             if(isalpha(dest[i])==0) k++;
             }
             printf("Количество символов строки, не являющихся буквами - %d\n",k);
    system("PAUSE");
    return EXIT_SUCCESS;
}
