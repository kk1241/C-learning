#include <stdio.h>

void strip_string(char* str, int max_len)
{
    int count = 0;
    while(*str++ != '\0' && count++ < max_len);

    if(count > 1) {
        str -= 2;
        if(*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    char str[100];
    int words = 0;
int in_word = 0;
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    
      
        for (int i = 0; str[i] != '\0'; i++){
          if (str[i] == ' ') {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
              if (words == 2){
                while (str[i] != ' ' && str[i] != '\0'){
                    printf("%c", str[i]);
                    i++;
                }
              }
        }
            
        }
          if (words < 2) {
        printf("no");
    }

   
    return 0;
}