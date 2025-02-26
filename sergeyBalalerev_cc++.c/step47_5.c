/*Подвиг 5. Напишите программу, которая читает из входного потока целое число в переменную value типа int. 
Каждые два байта этой переменной следует обработать по следующему алгоритму:
1. Представить два байта в виде целого числа.
2. Увеличить каждое полученное двухбайтовое число на единицу.
3. Увеличенное значение снова побайтно перенести в соответствующие ячейки переменной value.

Полученное значение переменной value вывести в консоль в виде одного целого числа.
Sample Input:
325476
Sample Output:
391013
P. S. При написании программы гарантируется: char = 1 байт; short = 2 байта; int = 4 байта; double = 8 байт.*/

#include <stdio.h>

int main(){
    int value;
    char *ptr = (char*) &value;
    scanf("%d", &value);

    for (int i = 0; i < sizeof(value); i += 2){
        short byte = ptr[i];

        byte++;

        ptr[i] = byte;

    }

    printf("%d", value);

    return 0;
}