#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);  // Read N and K

        int wolverine_count = 0;  // Counter for Wolverine-like minions
        for (int i = 0; i < N; i++) {
            int char_value;
            scanf("%d", &char_value);  // Read each minion's characteristic value

            // Check if the transmogrified value is divisible by 7
            if ((char_value + K) % 7 == 0) {
                wolverine_count++;
            }
        }

        printf("%d\n", wolverine_count);  // Output the count for this test case
    }

    return 0;
}
