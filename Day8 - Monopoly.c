#include <stdio.h>
void check_monopoly(int P, int Q, int R, int S) {
    int sum = P + Q + R + S;

    if (2 * P > sum) {
        printf("YES\n");
    } else if (2 * Q > sum) {
        printf("YES\n");
    } else if (2 * R > sum) {
        printf("YES\n");
    } else if (2 * S > sum) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int P, Q, R, S;  
        scanf("%d %d %d %d", &P, &Q, &R, &S);

        check_monopoly(P, Q, R, S);
    }

    return 0;
}