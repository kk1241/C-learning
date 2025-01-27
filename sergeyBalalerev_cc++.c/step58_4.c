/*Подвиг 5. Напишите программу, которая читает из входного потока в массив data названия шести стран, записанных в одну строчку через пробел. 
Считать, что максимальная длина названия страны не превышает 30 символов. Вывести в консоль страны, начинающиеся на букву 'G', 
в одну строчку через пробел в том же порядке, что и во входном потоке. Если таких стран нет, то ничего выводить не нужно.

Sample Input:
Madagascar Germany Greece France Guinea Italy
Sample Output:
Germany Greece Guinea*/

#include <stdio.h>

int main(){

    char str[30];

    int max_len = sizeof(str);
    int i = 0, word_len = 0;
    char ch;
    char word[30];

    while ((ch = getchar()) != '\n' && ch != EOF && i < max_len - 1) {
        if (ch == ' '){
            if (word_len > 0 && word[0] == 'G'){
                for (int j = 0; j < word_len; j++){
                    printf("%c", word[j]);
                }
                printf(" ");

            }
            word_len = 0;

        }else{
            word[word_len++] = ch;
        }
        
    }


 

    return 0;
}