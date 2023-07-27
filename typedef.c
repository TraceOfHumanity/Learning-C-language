#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct MyStruct
{
	int x, y;
} a;

typedef struct MyStruct MyStruct1;


int main() {

	MyStruct1 a[10];
	a[0].x = 1;
	a[0].y = 2;
	a[7].x = 3;
	a[7].y = 4;

	for (int i = 0; i < 10; i++) {
		printf("%d %d\n", a[i].x, a[i].y);
	}

	return 0;
}
