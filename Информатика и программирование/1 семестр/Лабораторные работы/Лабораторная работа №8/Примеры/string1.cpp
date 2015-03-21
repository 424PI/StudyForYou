#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1251");
    char dest[200];
    printf("Вводите строку символов: ");
    // Ввод строки
    gets(dest);
    // Используем для работы вспомогательную строку buf.
    // Выделение памяти под вспомогательную строку
    char *buf = new char [strlen(dest)+1];
    // Копируем строку dest в строку buf
    strcpy(buf,dest);
    char *words;
    // Подсчет количества слов
    int k = 0;
    // Выделить первое слово
    char *temp = strtok(buf," ,;.!?-");
   // Выделение следующих слов
    while (temp!=NULL)
     {
       temp = strtok(NULL," ,;.!?-");
       k++;
      }
    // Если строка содержит хотя бы одно слово
    if (k){
     // выделить память под строку, которая будет хранить
    // начальные символы слов
    words = new char[k+1];
    k = 0;
    // провести выделение слов вновь
    temp = strtok(dest," ,;.!?-");
    // сохраняя первый символ каждого выделенного слова 
    // в строке words. 
       words[k++] = temp[0];
      while (temp!=NULL)
       {
          temp = strtok(NULL," ,;.!?-");
          if (temp)
                words[k++] = temp[0];
        }
// последним символом полученной строки записать 
// нуль-терминатор
 words[k] = '\0';
// вывести строку на экран
 puts(words);
 }
    system("PAUSE");
    return EXIT_SUCCESS;
}
