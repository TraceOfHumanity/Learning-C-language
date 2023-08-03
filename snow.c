#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define h 40
#define w 80

char mas[h][w + 1];

void init() {
	for (int i = 0; i < w; i++) {
		mas[0][i] = ' ';
	}
	mas[0][w] = '\0';
	for (int i = 1; i < h; i++) {
		sprintf(mas[i], mas[0]);
	}
}

void show() {
	mas[h - 1][w - 1] = '\0';
	for (int i = 0; i < h; i++) {
		printf(mas[i]);
	}
}

void newSnow() {
	for (int i = 0; i < w; i++)
	{
		if (rand() % 12 == 1) {
			mas[0][i] = '*';
		}
	}
}

void moveSnow() {
	//for (int i = h - 1; i > 0; i--) {
	//	for (int j = 0; j < w; j++) {
	//		mas[i][j] = mas[i - 1][j];
	//	}
	//}
	int dx;
	for (int j = h - 1; j >= 0; j--)
	{
		for (int i = 0; i < w; i++)
		{
			if (mas[j][i] == '*')
			{
				mas[j][i] = ' ';
				dx = 0;
				if (rand() % 10 < 1) dx +=2;
				if (rand() % 10 < 1) dx -=2;
				dx = dx + i;
				if ((dx >= 0) && (dx < w) && (j + 1 < h))
				{
					mas[j + 1][dx] = '*';
				}
			}
		}
	}

}

void setcur(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	init();

	do {
		setcur(0, 0);
		moveSnow();
		newSnow();
		show();
		Sleep(100);
	} while (GetKeyState(VK_ESCAPE) >= 0);


}
