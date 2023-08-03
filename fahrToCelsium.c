#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsium;
    int lower, upper,step;

    lower = 0;
    upper = 1000;

    step = 100;
    fahr = lower;
    while(fahr <= upper){
        celsium = 5 * (fahr-32)/ 9;
        printf("%.0f fahr\t -> %.3f celsium\n",fahr, celsium);
        fahr = fahr + step;
    }
    return 0;
}
