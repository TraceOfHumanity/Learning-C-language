include <stdio.h>
#include <stdlib.h>

typedef int (*funcptr)(int, int);


int maxxx(int a, int b)
{
	if (a > b) return a;
	return b;
}

int main() {
	funcptr func;
	func = maxxx;

	printf("%d\n", func(100, 2));

	return 0;
}
