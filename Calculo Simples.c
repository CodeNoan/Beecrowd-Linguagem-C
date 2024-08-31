#include<stdio.h>

int main() {
    int codigo1, pecas1, codigo2, pecas2;
    float valor_unit1, valor_unit2;

    scanf("%d", &codigo1);

    scanf("%d", &pecas1);

    scanf("%f", &valor_unit1);


    scanf("%d", &codigo2);

    scanf("%d", &pecas2);

    scanf("%f", &valor_unit2);

    float total= (pecas1 * valor_unit1) + (pecas2 * valor_unit2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);


    return 0;
}
