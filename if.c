#include <stdio.h>

int main() {
	int t = 15;
	if (t > 10) {
		printf("t is greater than 10\n");
		if (t > 12) {
			printf("t is greater than 12\n");
		} 
	} else {
		printf("t is less than 10\n");
	}
	return 0;
}
