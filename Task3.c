#include <stdio.h>

int main() {
    int total;

    total = 0;

    for (int i=1; i < 600; i++) {
        if(i%7==0 && i%9==0){
            total += i;
        }
    }
    printf("%d", total);
    return 0;
}

