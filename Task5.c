#include <stdio.h>

int main() {

    for (int i=1; i < 50; i=i+2) {
        // if(i%2 != 0){
        //     printf("%d", i);
        // }
        printf("%d%s", i, (i < 50) ? " " : "");
    }
    return 0;
}

