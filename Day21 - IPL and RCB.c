#include <stdio.h>
int main() {
    int T, X, Y, MW;
    scanf("%d", &T);
    while (T--) {
        scanf("%d ", &X);
        scanf("%d", &Y);
        MW=(X-Y>0)?(X-Y):0;
        printf("%d\n", MW);
    }
    return 0;
}