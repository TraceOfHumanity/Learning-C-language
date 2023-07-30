#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define width 65
#define height 25

char mas[height][width + 1];

void init() {
	for (int i = 0; i < width - 1; i++) {
		mas[0][i] = '#';
	}
	mas[0][width - 1] = '\0'; // Закриваємо перший рядок нуль-термінатором

	for (int i = 1; i < height - 1; i++) {
		strncpy(mas[i], mas[0], width - 1); // Копіюємо всі символи рядка, але без нуль-термінатора
		mas[i][width - 1] = '\0'; // Кожен рядок має закінчуватись нуль-термінатором
	}
}

void show() {
	for (int i = 0; i < height; i++) {
		printf("%s\n", mas[i]);
	}
}

int main() {
	init();
	show();

	return 0;
}
