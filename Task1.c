#include <stdio.h>

int main() {
    // Task-01(a)
    printf("a) ");
    for (int a = 24; a >= -6; a = a - 6) {
        printf("%d%s", a, (a > -6) ? ", " : "\n");
    }
    // Task-01(b)
    printf("b) ");
    for(int b=-10; b<=20; b=b+5){
        printf("%d%s", b, (b < 20) ? ", " : "\n");
    }
    // Task-01(c)
    printf("c) ");
    for(int c=18; c<=63; c=c+9){
        printf("%d%s", c, (c < 63) ? ", " : "\n");
    }
    // // Task-01(d)
    int values[] = {18, -27, 36, -45, 54, -63};
    int length = sizeof(values) / sizeof(values[0]);
    printf("d) ");
    for (int d = 0; d < length; d++) {
        printf("%d%s", values[d], (d < length - 1) ? ", " : "\n");
    }
    return 0;
}
