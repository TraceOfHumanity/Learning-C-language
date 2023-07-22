#include <stdio.h>
#include <stdlib.h>

int square(float x) {
	float a;
	printf("enter number\n");
	scanf_s("%f", &a);
	return a * a;
}

int main() {
	float t = square(2);
	printf("quatro = %f\n", t);

}
