#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;

	do {
		printf("input integer = \n");
		scanf_s("%d", &a);
	} while (a != 7); 


	return 0;
}
