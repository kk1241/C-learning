#include <stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    x = sizeof(x);
    printf("%f", x);

    return 0;
}