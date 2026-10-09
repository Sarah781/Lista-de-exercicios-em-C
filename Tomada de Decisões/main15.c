#include <stdio.h>

int main(){
    int x = 10;

    if (x > 5) {
        x = x + 5;
    }

    if (x > 12) {
        x = x * 2;
    }

    printf("%d\n", x);
    return 0;
}