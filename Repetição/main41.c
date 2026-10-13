#include <stdio.h>
int main(){
    int resultado = 1;

for (int i = 1; i <= 4; i++) {
    resultado = resultado * 2;
}

printf("%d\n", resultado);
return 0;
}