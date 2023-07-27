#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct MyStruct
{
	int x, y;
} a;

int main() {
	struct MyStruct h;
	h.x = 10;
	h.y = 20;
	a.y = 10;
	a.x = 20;
	printf("%d %d\n", a.x, a.y);
	printf("%d %d\n", h.x, h.y);

	return 0;
}
