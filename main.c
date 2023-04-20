#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluarNoun[20];
    char celebrity[20];

    printf("enter a Color: ");
    scanf("%s", color);
    printf("enter a plural noun: ");
    scanf("%s", pluarNoun);
    printf("enter a celebrity: ");
    scanf("%s", celebrity);

    printf("roses ere %s\n", color);
    printf("%s are blue\n", pluarNoun);
    printf("i love %s\n", celebrity);

    return 0;
}
