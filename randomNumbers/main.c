#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5000

int main() {
    int array[ARRAY_SIZE];
    int i;

    // Ініціалізуємо генератор випадкових чисел
    srand(time(NULL));

    // Заповнюємо масив випадковими числами
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand();
    }

    // Виводимо елементи масиву у консоль через кому
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", array[i]);

        // Додаємо кому, крім останнього елемента
        if (i < ARRAY_SIZE - 1) {
            printf(", ");
        }
    }

    return 0;
}
