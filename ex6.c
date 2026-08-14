#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int numero;

    scanf("%d", &numero);

    if (numero % 2 != 0){
        printf("IMPAR");
    }
    else{
        printf("PAR");
    }
}