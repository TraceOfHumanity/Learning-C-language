#include <stdio.h>
#include <stdlib.h>

int main() {
	int* x = NULL;

	x = malloc(sizeof(int));
	*x = 300;
	printf("%d\n", *x);

	free(x);
	x = NULL;

	return 0;
}
