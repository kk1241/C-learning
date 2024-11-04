#include <stdio.h>

int main(void)
{
    int a;
    int b;
    float c;
    float d;
    scanf("%d, %d, %*f, %f", &a, &b, &c, &d);
    printf("%d %d %.2f", a, b, d);

    return 0;
}