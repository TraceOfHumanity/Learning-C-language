#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 5;
	int* iPtr = &i;
	*iPtr = 6;
	printf("%d", i);
}
