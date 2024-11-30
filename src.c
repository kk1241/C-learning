#include <stdio.h>

int read_int() {
    int x;
    scanf("%d", &x);
    return x;
}


int main()
{
    printf("%d\n", read_int() ^ 0x420984ED );

    return 0;
} 

