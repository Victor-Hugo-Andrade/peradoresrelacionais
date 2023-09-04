#include <stdio.h>

int main() {
    float salario;
    float salarioMinimo = 1320.0;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > salarioMinimo) {
        printf("Ganha mais que o salario manimo atual.\n");

    } else {
        printf("Ganha igual ou menos que o salario minimo atual.\n");
    }

    return 0;
}
