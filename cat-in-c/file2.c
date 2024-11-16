#include <stdio.h>



int main(int argc, char **argv){
    FILE * fp = fopen("file.txt", "w");

    for(int i = 0; i < argc; i ++){
           fputc(*argv[i], fp);
    }
    fclose(fp);
    return 0;
}