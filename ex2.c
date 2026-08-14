#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("O dobro de %d é %d\n", n, n * 2);
}