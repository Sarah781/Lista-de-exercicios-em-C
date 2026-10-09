#include <stdio.h>
int main() {    
    int x = 10;

    if (x > 5 && !(x > 20)) {
        printf("A");
    } else {
        printf("B");
    }
    return 0;
}