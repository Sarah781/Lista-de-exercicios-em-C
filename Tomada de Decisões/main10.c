#include <stdio.h>

int main(){
    int x = 10;

    if (x > 5) {
        x = x + 10;
    }

    printf("%d\n", x);
    return 0;
}