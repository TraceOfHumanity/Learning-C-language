#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    for(int i =0; i<120 * 26;i++)
    {
        if(rand() % 2)
        putchar('/');
        else
            putchar('\\');
    }
    return 0;
}
