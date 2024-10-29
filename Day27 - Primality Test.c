#include <stdio.h>

// Function to check primality
int is_prime(int n) {
    if (n <= 1) return 0; // 1 and less are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // divisible, not prime
    }
    return 1; // prime
}

int main() {
    int t, n;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        if (is_prime(n)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}