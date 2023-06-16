#include <stdio.h>

int main()
{
    float A, B;

    scanf("%f%f", &A, &B);

    float MEDIA = ((A * 3.5) + (B * 7.5)) / 11.0;

    printf("MEDIA = %.5f\n", MEDIA); 

    return 0;
}