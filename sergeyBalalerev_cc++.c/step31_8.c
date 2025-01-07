#include <stdio.h>
#include <stdbool.h>

int main(){
    float x = 0;
    scanf("%f", &x);
    
    int res = (float)((x >= -10) && (x < 0)) || ((x <= 12) && (x > 5));
    
    printf("%d", res); 
}