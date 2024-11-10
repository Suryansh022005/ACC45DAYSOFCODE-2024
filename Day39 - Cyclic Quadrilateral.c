#include <stdio.h>

int is_cyclic_quadrilateral(int A, int B, int C, int D) {
    // A quadrilateral is cyclic if sum of opposite angles is 180°
    return (A + C == 180) && (B + D == 180);
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);  // Read the angles
        
        // Check if the quadrilateral is cyclic
        if (is_cyclic_quadrilateral(A, B, C, D)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
