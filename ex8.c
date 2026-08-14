#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida\n");
    } else if (nota >= 6.0) {
        printf("APROVADO\n");
    } else if (nota >= 4.0) {
        printf("RECUPERACAO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}