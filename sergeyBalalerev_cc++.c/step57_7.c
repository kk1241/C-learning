/*Подвиг 7. Продолжите программу, в которой объявляется строка с именем str и максимальной длиной 50 символов (включая символ конца строки). 
Инициализируйте str строковым литералом "best string!". Затем, вставьте в начало массива str фрагмент "The ", чтобы получилось "The best string!".

P. S. В консоль ничего выводить не нужно.*/

#include <stdio.h>


int main() {
    char str[50] = "best string!";
    char new_str[4] = "The ";

    int length = 0;
    int new_length = 0;
    while (str[length] != '\0')
    {
        length++;   
    }
    while (new_str[new_length] != '\0')
    {
        new_length++;  
    }

    for (int i = length; i  >= 0; i--){
        str[i + new_length] = str[i];

    }
    for (int j = 0; j < new_length; j++){
        str[0 + j] = new_str[j];

    }
    
   // printf("%s", str);





    return 0;
}
