#include <stdio.h>

int main(){
    int g = 4;
    int *ptr = &g;

    printf("%u\n", ptr);

    ptr++;

    printf("%u\n", ptr);


    return 0; 

}