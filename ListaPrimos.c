#include <stdio.h>

int main() {
    int contador, num;
    printf("Ingresar un numero: ");
    scanf("%d", &num);

    printf("Lista de numeros primos hasta %d: \n", num);
    for (int i = 2; i <= num; i++) {
        contador = 0;
        for (int j = 2; j <= i-1; j++) {
            if (i % j == 0) {
                contador++;
            }
        }
        if (contador == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
