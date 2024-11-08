#include <stdio.h>

int main(void)
{
    unsigned char b, not_b;
    scanf("%hhu", &b);

    
    not_b = ~b;
    printf("%hhu", not_b);

    return 0;
}