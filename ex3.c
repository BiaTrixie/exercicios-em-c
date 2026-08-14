#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float raio;
    float pi = 3.14159265358979323846 ;

    printf("Digite um raio: ");
    scanf("%f", &raio);

    printf("A área do círculo é: %.2f\n", pi * raio * raio);
}