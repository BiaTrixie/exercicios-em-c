#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n;
    int sum = 0;

    for (int i = 1; i <= 3; i++) {
        scanf("%d", &n);
         
        sum += n;
    }

    printf("soma: %d\n", sum);
    printf("média: %.2f\n", sum / 3.0f);
}