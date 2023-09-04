#include <stdio.h>

int main() {
    float altura;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    if (altura > 1.8) {
        printf("Voce tem mais de 1.80.\n");
    } 

    return 0;
}
