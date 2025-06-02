#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *p_inteiro = 20;
    *p_real = 6.28;
    *p_caractere = 'B';

    printf("\nDepois da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
