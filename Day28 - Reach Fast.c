#include <stdio.h>
int main() {
    int T, A, B, K;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &K);
        if (A<B) {
            int steps=(B-A+K-1)/K;
            printf("%d\n", steps);
        }
        else if (A>B) {
            int steps=(A-B+K-1)/K;
            printf("%d\n", steps);
        }
        else {
            printf("0\n");
        }
    }
}