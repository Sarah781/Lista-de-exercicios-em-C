#include <stdio.h>

int main(){
    int x = 8;

    if (x > 5) {
        x = x + 2;
    } else {
        x = x - 2;
    }

    printf("%d\n", x);
    return 0;

}