#include <stdio.h>

int main()
{
    float F;

    scanf("%f", &F);

    float C = (F - 32) / 1.8;

    printf("%.2lf\n", C);
    
    return 0;
}