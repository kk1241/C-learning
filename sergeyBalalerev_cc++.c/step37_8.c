#include <stdio.h>

#define TWO     2
#define FOUR    TWO * 2
#undef TWO

int main(void)
{
    int b = FOUR;
    printf("TWO = %d\n", b / 2);
    return 0;
}