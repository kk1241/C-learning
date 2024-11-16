#include <stdio.h>

#define MAX 15
int main(){
    char name[MAX];
    fgets(name, MAX, stdin); //ввод одной строки

    FILE * fp = fopen("txt1.txt", "w"); 

    if (fp == NULL){
        return 1;
    }

    for (int i = 0; i < name[i]; i++){ // запись в файл
        fputc(name[i], fp);
    }

    fclose(fp);
    return 0;
}