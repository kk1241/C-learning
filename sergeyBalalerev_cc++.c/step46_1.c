#include <stdio.h>
 
int main(void)
{
    char ch = 'a';
    char* ptr = &ch;

    int * ptr_i = (int *)ptr;
    *ptr_i = 0;

    return 0;
}