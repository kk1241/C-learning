#include <stdio.h>

int main(){
    int d = 0;
    

    scanf("%d", &d);

    int bit = 1 >> d;
    printf("%d", bit);

    return 0;
}