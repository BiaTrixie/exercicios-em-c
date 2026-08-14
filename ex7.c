#include <stdio.h>

int main() {
    int n, i;
    float valor, soma = 0, maior, menor, media;

    printf("Quantos valores? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%f", &valor);

        soma += valor;

        if (i == 0) {
            maior = valor;
            menor = valor;
        } else {
            if (valor > maior)
                maior = valor;

            if (valor < menor)
                menor = valor;
        }
    }

    media = soma / n;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);

    return 0;
}