#include <stdio.h>
int main(){
    int soma = 0;

    for (int i = 1; i <= 6; i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        } else {
            soma = soma + 1;
        }
    }

    printf("%d\n", soma);

    return 0;
}