#include <stdio.h>
int main() {
    int T, R1, R2, R3, R4;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &R1);
        scanf("%d", &R2);
        scanf("%d", &R3);
        scanf("%d", &R4);
        if (R1==0 && R2==0 && R3==0 && R4==0) {
            printf("IN\n");
        }
        else {
            printf("OUT\n");
        }
    }
}