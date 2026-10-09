#include <stdio.h>

int main(){
    int x = 5;

    if (x > 2 && x < 10) {
        x = x + 5;
    }

    printf("%d\n", x);
    return 0;
}