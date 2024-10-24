#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);
        
        int coefficients[N]; // Array to store coefficients
        
        // Read coefficients
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }
        
        // Determine the degree of the polynomial
        int degree = -1; // Initialize degree to -1
        
        // Check coefficients from the highest degree to the lowest
        for (int i = N - 1; i >= 0; i--) {
            if (coefficients[i] != 0) {
                degree = i; // Update degree
                break;
            }
        }
        
        // Output the degree
        printf("%d\n", degree);
    }
    
    return 0;
}
