#include <stdio.h>

int main(void)
{
    short a, b;
    short *ptr_a, *ptr_b;
    ptr_a = &a;
    ptr_b = &b;
  
    scanf("%hd, %hd", &a, &b);
    

    void *ptr;
    ptr = ptr_a;
    ptr_a = ptr_b;
    ptr_b = ptr;

    printf("%d %d", *ptr_a, *ptr_b);



    return 0;
}