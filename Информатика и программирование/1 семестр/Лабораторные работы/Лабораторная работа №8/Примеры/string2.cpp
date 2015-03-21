#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    char dest[200];
    printf("Вводите строку символов: ");
    gets(dest);
    char *buf = new char [strlen(dest)+1];
    strcpy(buf,dest);
    // Выделить первое слово строки
    char *temp = strtok(buf," ,;.!?-");
    // Принять это слово за слово с максимальной длиной
    int max = strlen(temp);
    char *strmax = new char[max+1];
    strcpy(strmax,temp);
    // Выделять последующие слова и сравнивать их со
    // словом с максимальной длиной
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
    printf("В строке // %s // \n слово с максимальной длиной // %s //",dest,strmax);
    printf("\n Его длина - %d",max);
    delete [] strmax;
    delete [] buf;
    system("PAUSE");
    return EXIT_SUCCESS;
}
