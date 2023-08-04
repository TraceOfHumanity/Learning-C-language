#include <stdio.h>
#include <stdlib.h>

struct SPoint {
	int x;
	int y;
};

typedef struct SPoint TPoint;

void ShowPoint(TPoint point)
{
	printf("x=%d, y=%d\n", point.x, point.y);
}
int main() {
	TPoint p;
	TPoint* pPtr = NULL;

	p.x = 10;
	p.y = 20;
	pPtr = &p;

	if (pPtr != NULL) {
		(*pPtr).x = 30;
		(*pPtr).y = 40;
	}

	ShowPoint(p);
	return 0;

}
