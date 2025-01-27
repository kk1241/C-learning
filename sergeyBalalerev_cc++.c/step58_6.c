/*Подвиг 6. Продолжите программу, которая читает из входного потока строку целиком с помощью функции fgets(). 
На выходе формируется корректная Си строка. Удалите из прочитанной строки все латинские символы 'e' и выведите в консоль полученную строку.

Sample Input:
c_lokalnye-i-globalnye-peremennye
Sample Output:
c_lokalny-i-globalny-prmnny*/

#include <stdio.h>

int main(){
    char str[30];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] != 'e'){
            printf("%c", str[i]);
        }

    }

    return 0;

}