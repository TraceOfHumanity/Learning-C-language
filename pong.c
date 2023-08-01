#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define width 65
#define height 25

char mas[height][width + 1];

typedef struct {
	int x, y;
	int w;
}TRacket;
TRacket racket;

typedef struct {
	int x, y;
} TBall;
TBall ball;

void initBall() {
	ball.x = 2;
	ball.y = 2;
}

void putBall() {
	mas[ball.y][ball.x] = 'O';
}

void moveBall(int x, int y) {
	ball.x = x;
	ball.y = y;
}

void initRacket() {
	racket.w = 7;
	racket.x = (width - racket.w) / 2;
	racket.y = height - 1;
}

void putRacket() {
	for (int i = racket.x; i < racket.x + racket.w; i++)
		mas[racket.y][i] = '=';
}

void init()
{
	for (int i = 0; i < width; i++)
		mas[0][i] = '#';
	mas[0][width] = '\0';

	strncpy(mas[1], mas[0], width + 1);
	for (int i = 1; i < width - 1; i++)
		mas[1][i] = ' ';

	for (int i = 2; i < height; i++)
		strncpy(mas[i], mas[1], width + 1);
}

void moveRacket(int x) {
	racket.x = x;
	if (racket.x < 1)
		racket.x = 1;
	if (racket.x + racket.w > width - 2)
		racket.x = width - 1 - racket.w;
}

void show()
{
	for (int i = 0; i < height; i++) {

		printf("%s\n", mas[i]);
		if (i > height - 1)
			printf("\n");
	}
}

void setCursor(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	initRacket();
	initBall();
	
	do {
		setCursor(0, 0);
		init();
		putRacket();
		putBall();
		show();

		if (GetKeyState('A') < 0)
			moveRacket(racket.x - 2);
		if (GetKeyState('D') < 0)
			moveRacket(racket.x + 2);
		moveBall(racket.x + racket.w / 2, racket.y - 1);
		Sleep(10);
	} while (GetKeyState(VK_ESCAPE) >= 0);

	return 0;
}
