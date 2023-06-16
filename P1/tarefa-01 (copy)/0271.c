#include <stdio.h>

int main()
{
    float raio;

    scanf("%f", &raio);

    printf("%.4f\n", ((raio * raio) * 3.14159) / 10000);

    return 0;
}