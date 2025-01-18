#include <stdio.h>

int pointors(char *b){
    *b -= 10;

    return 0;
}


int main(){ 
    char a = 10;
    char * b = 0;

    b = &a;
    

    printf("%d\n", *b);
    *b = 100;
    printf("%d\n", *b);

    pointors(b);
    printf("%d", *b);




    return 0;
}