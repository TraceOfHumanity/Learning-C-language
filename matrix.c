#include <stdio.h>
#include <stdlib.h>

int main() {
	int m[9][9];
	int i,k;
	for (k = 0; k < 9; k++) {
		for (i = 0; i < 9; i++) {
			m[k][i] = 1;
			printf("%d ", m[k][i]);
		}
		printf("\n");
		
	}
	return 0;
}
