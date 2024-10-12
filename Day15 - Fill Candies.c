#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, K, M, B;
        scanf("%d %d %d", &N, &K, &M);
        B = M * K;
        int BN = (N + B - 1)/B;
        printf("%d\n", BN);
    }
    return 0;
}