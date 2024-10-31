#include <stdio.h>

void determine_server(int P, int Q) {
    int T = P + Q;  // Total points played
    int serves_in_cycle = T % 4;  // Remaining serves in the current cycle

    if (serves_in_cycle == 0 || serves_in_cycle == 1) {
        printf("Alice\n");
    } else {
        printf("Bob\n");
    }
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int P, Q;
        scanf("%d %d", &P, &Q);
        determine_server(P, Q);
    }

    return 0;
}

