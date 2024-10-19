#include <stdio.h>
int main() {
    int X, Y, T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &X, &Y);
        if (X < Y) {
            printf("BIKE\n");
        }
        else if (X > Y) {
            printf("CAR\n");
        }
        else {
            printf("SAME\n");
        }
    }
}