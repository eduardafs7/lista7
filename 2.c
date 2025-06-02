#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    int *p_a = &a;
    int *p_b = &b;

    printf("Endereco de a: %p\n", (void*)p_a);
    printf("Endereco de b: %p\n", (void*)p_b);

    if (p_a > p_b) {
        printf("O maior endereco e o de a: %p\n", (void*)p_a);
    } else {
        printf("O maior endereco e o de b: %p\n", (void*)p_b);
    }

    return 0;
}
