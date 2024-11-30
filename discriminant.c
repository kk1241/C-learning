#include <stdio.h>


int discriminant(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    
    
    return d;
}

int root_count(int d) {
   int D = d;
   if (D > 0){
    D = 2;   
   }else if(D == 0){
    D = 1;
   }else{
    D = 0;
   }

   return D;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int d = discriminant(a, b, c);
    printf("%d", root_count(d));

    return 0;
}