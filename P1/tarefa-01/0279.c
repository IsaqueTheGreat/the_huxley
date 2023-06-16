#include <stdio.h>

int main()
{
    int numero_funcionario, quantidade_horas;

    float valor_hora;

    scanf("%d%d%f", &numero_funcionario, &quantidade_horas, &valor_hora);

    printf("NUMBER = %d\nSALARY = R$ %.2f\n", numero_funcionario, quantidade_horas * valor_hora);

    return 0;
}