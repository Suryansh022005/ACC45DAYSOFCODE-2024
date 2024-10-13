#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int NB = 10*N;
        printf("%d\n", NB);
    }
    return 0;
}