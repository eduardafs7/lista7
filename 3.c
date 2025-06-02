#include <stdio.h>

void troca(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    troca(&A, &B);

    printf("Depois da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
