#include <stdio.h>
#include <stdlib.h>

int Inc(int a) {
	return a + 1;
}

void Inc2(int* a) {
	if (a != NULL) {
		*a = *a + 10;
	}
}

int main() {
	int i = 2;
	i = Inc(i);
	Inc2(&i);
	printf("i = %d\n", i);

}
