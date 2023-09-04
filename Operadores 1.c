#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("A pessoa e maior de 18 anos.\n");
        
    } else {
        printf("A pessoa nao e maior de 18 anos.\n");
    }

    return 0;
}
