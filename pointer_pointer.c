#include <stdio.h>

int main(){
char a = 'A';
char *ptr1;
char **ptr2;

ptr1 = &a;

ptr2 = &ptr1;

printf("ptr = %c", **ptr2);

}