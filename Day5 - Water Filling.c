#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int B1, B2, B3;  
        scanf("%d %d %d", &B1, &B2, &B3);
        int empty_bottles = (1 - B1) + (1 - B2) + (1 - B3);
        if (empty_bottles >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }
    return 0;
}