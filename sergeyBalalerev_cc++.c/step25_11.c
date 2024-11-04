#include <stdio.h>

int main() {
    double temperatures[10];
    
    // Чтение первых 10 чисел из входного потока
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &temperatures[i]);
        if (i < 9) {
            // Пропускаем точку с запятой после первых 9 значений
            getchar(); // Читаем символ точки с запятой
        }
    }

    // Вывод последних 5 значений с точностью до десятых
    for (int i = 5; i < 10; i++) {
        printf("%.1f", temperatures[i]);
        if (i < 9) {
            printf(" "); // Вывод пробела между числами
        }
    }


    return 0;
}
