#include <stdio.h>

int main() {
    float peso;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("Voce pesa menos que 60 kg.\n");
    } 

    return 0;
}
