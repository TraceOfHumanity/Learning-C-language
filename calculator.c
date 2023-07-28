#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y;
	int i;

	printf("input x: ");
	scanf_s("%d", &x);
	printf("input y: ");
	scanf_s("%d", &y);

	printf("operator: \n1 = *\n2 = /\n3 = +\n4 = -\n");
	scanf_s("%d", &i);

	switch (i) {
	case 1:
		printf("%d * %d = %d\n", x, y, x * y);
		break;
	case 2:
		printf("%d / %d = %d\n", x, y, x / y);
		break;
	case 3:
		printf("%d + %d = %d\n", x, y, x + y);
		break;
	case 4:
		printf("%d - %d = %d\n", x, y, x - y);
		break;
	default:
		printf("invalid operator\n");
		break;
	}

	return 0;
}
