#include <stdio.h>
#include <stdlib.h>


int main() {

	int a;
	scanf_s("%d", &a);

	a = a < 10 ? a * 2 : a / 2;

	printf("%d", a);

	return 0;
}
