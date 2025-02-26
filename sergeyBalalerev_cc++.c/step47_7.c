/*Подвиг 7 (с повторением). Напишите программу, которая читает из входного потока целое число в переменную count типа int. 
В каждом байте переменной count нужно выключить 7-й, 6-й и 1-й биты (нумерация бит в байте: 7, 6, 5, 4, 3, 2, 1, 0). 
Вывести в консоль полученное значение count в виде одного целого числа.
Sample Input:
65535
Sample Output: 15677
*/
#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);
    char *ptr = (char *) &count;

    // Маска для выключения 7-го, 6-го и 1-го битов
    int mask = 194; // 193 в десятичной системе

    for (size_t i = 0; i < sizeof(int); i++) {
        *(ptr + i) = *(ptr + i) & ~mask;
    }

    printf("%d\n", count);

    return 0;
}
