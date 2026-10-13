#include <stdio.h>
int main(){
int resultado = 0;

for (int i = 1; i <= 5; i++) {
    if (i > 3) {
        resultado = resultado + 2;
    } else {
        resultado = resultado + 1;
    }
}

printf("%d\n", resultado);

return 0;
}