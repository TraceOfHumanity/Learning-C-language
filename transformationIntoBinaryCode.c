#include <stdio.h>

int main() {
	int i = 123;
	char binary[50];
	int j = sizeof(int) * 8 - 1;

	for (int k = 0; k < sizeof(int) * 8; k++) {
		binary[k] = (i & (1 << j)) ? '1' : '0';
		j--;
	}

	binary[sizeof(int) * 8] = '\0';

	printf("i = %s\n", binary);
	return 0;
}
