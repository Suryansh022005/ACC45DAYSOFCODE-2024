#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        if (N%7>1) {
            printf("%d\n", (N / 7 + 1)); 
        }
        else {
            printf("%d\n", (N / 7));
        }
    }

    return 0;
}