#include <stdio.h>

int main(void)
{
    char menu_item;
    short menu_number = 0;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    if(scanf("%c", &menu_item) != 1) {
        printf("Input error.");
        return 0;
    }
    switch (menu_item)
    {
    case 'A':
    case 'a':
        menu_number = 1;
        break;
    case 'B':
    case 'b':
        menu_number = 2;
        break;
    case 'C':
    case 'c':
        menu_number = 3;
        break;
    case 'D':
    case 'd':
        menu_number = 4;
        break;
    default:
        menu_number = -1;
        break;
    }


    printf("%hd", menu_number);


   __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}