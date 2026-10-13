#include <stdio.h>
int main() {

int soma = 0;

for (int i = 2; i <= 6; i = i + 2) {
    soma = soma + i;
}

printf("%d\n", soma);

return 0;
}