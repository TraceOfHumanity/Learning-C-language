#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';

    switch (grade)
    {
    case 'A':
        printf("aaa");
        break;
    case 'B':
        printf("bbb");
        break;
    case 'C':
        printf("ccc");
        break;
    case 'D':
        printf("ddd");
        break;
    case 'E':
        printf("eee");
        break;
    case 'F':
        printf("fff");
        break;
    default:
        printf("default");
    }

    return 0;
}
