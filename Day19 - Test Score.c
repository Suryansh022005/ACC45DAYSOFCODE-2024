#include <stdio.h>
int main() {
    int T, N, X, Y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        scanf("%d", &X);
        scanf("%d", &Y);
        if (Y % X == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}