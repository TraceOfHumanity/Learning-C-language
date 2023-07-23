#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main() {
	char mas[10][21];
	int i;
	int x = 10, y = 5;
	char key;
	int ox, oy;
	int ax = 5, ay = 5;
	int score = 0;
	time_t start_time, end_time;

	srand(time(NULL));

	// Отримання часу на початок гри
	start_time = time(NULL);

	do {
		sprintf_s(mas[0], sizeof(mas[0]), "####################");
		for (i = 1; i < 9; i++) {
			sprintf_s(mas[i], sizeof(mas[i]), "#                  #");
		}
		sprintf_s(mas[9], sizeof(mas[9]), "####################");

		mas[y][x] = '@';
		mas[ay][ax] = '*';

		system("cls");


		for (i = 0; i < 10; i++) {
			printf("%s\n", mas[i]);
		};

		printf("Score: %d\n", score);
		end_time = time(NULL);
		printf("Total time taken: %lld seconds\n", (long long int)(end_time - start_time));

		key = _getch();

		ox = x;
		oy = y;

		if (key == 'w') {
			y--;
		}
		if (key == 's') {
			y++;
		}
		if (key == 'a') {
			x--;
		}
		if (key == 'd') {
			x++;
		}
		if (mas[y][x] == '#') {
			x = ox;
			y = oy;
		}
		if ((x == ax) && (y == ay)) {
			ax = rand() % 18 + 1;
			ay = rand() % 8 + 1;
			score++;
		}

	} while (key != 'e');

	end_time = time(NULL);
	printf("Total time taken: %lld seconds\n", (long long int)(end_time - start_time));

	return 0;
}
