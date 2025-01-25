#include <stdio.h>

int main(){
    char str[] = "Hello World";
    char * ptr_str = str;

    for (int i = 0; ptr_str[i] != '\0'; i++){
        ptr_str[i] = 'A';

    }
    printf("%s", str);


    return 0;
}