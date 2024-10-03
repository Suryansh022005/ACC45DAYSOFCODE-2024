#include <stdio.h>

int max_people(int N, int X, int A[]) {
    int max = X;
    int current = X;
    for (int i = 0; i < N; i++) {
        current += A[i];
        if (current > max) {
            max = current;
        }
    }
    return max;
}
int main() {
    int T;  
    scanf("%d", &T);
    while (T--) {
        int N, X;  
        scanf("%d %d", &N, &X);

        int A[N];  
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        printf("%d\n", max_people(N, X, A));
    }
    return 0;
}