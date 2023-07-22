#include <stdio.h>

int main() {
	int a = 0;
	int mas[10];

	mas[0] = 12;
	mas[1] = 17;
	mas[2] = 29;
	mas[3] = 4;
	mas[4] = 10;

	printf("%d\n\n", mas[0]);
	while (a < 10)
	{
		printf("%d = %d\n", a, mas[a]);
		a++;
	}

	return 0;
}
