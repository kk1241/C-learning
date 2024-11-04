#include <stdio.h>

int main(void)
{
    int a;
    short b;
    float c;
    double d;
    scanf("%d %hd %f %lf", &a, &b, &c, &d);
    printf("%d %d %.2f %.2lf", a, b, c, d);



    return 0;
}