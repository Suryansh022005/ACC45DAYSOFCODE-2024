#include <stdio.h>
#include <stdlib.h>

void min_operations_to_balance_sum(int T) {
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        int total_sum = 0;

        // Read the array and calculate the total sum
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            total_sum += A[i];
        }

        // If the sum is odd, it's impossible to make it 0
        if (total_sum % 2 != 0) {
            printf("-1\n");
        } else {
            // The number of flips required to make the sum 0
            printf("%d\n", abs(total_sum) / 2);
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    // Call the function to process each test case
    min_operations_to_balance_sum(T);

    return 0;
}
