#include <stdio.h>
#include <stdlib.h>

void myprint(int cnt) {
	printf("Hello World!\n");
	cnt--;
	if (cnt > 0) {
		myprint(cnt);
	}
}

int main() {

	myprint(5);
	return 0;
}
