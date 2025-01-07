#include <stdio.h>
#include <stdbool.h>
//(-5, 0) и правого нижнего (10, 7).
int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    
    int res = x >= -5 && x <= 10 && y >= 0 && y <= 7;
    
    
    printf("%d", res); 
}

