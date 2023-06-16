#include <stdio.h>

int main()
{
    float A, B, C;

    scanf("%f%f%f", &A, &B, &C);

    float media = ((A * 2) + (B * 3) + (C * 5)) / 10.0;

    printf("MEDIA = %.1f\n", media);

    return 0;
}