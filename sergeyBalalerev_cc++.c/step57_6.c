/*Подвиг 6. Продолжите программу, в которой объявляется строка с именем str и максимальной длиной 100 символов (включая символ конца строки). 
Инициализируйте str строковым литералом "Best string!". Затем, удалите из строки все символы 's'.

P. S. В консоль ничего выводить не нужно.*/

#include <stdio.h>

#define STR_MAX 100

int main(){

    char str[STR_MAX] = "Best string!";
    char new_str[STR_MAX];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] != 's'){
            new_str[j] = str[i];
            j++;
        }    
    }
        new_str[j] = '\0';
        printf("%s", new_str);

    
    return 0;
}