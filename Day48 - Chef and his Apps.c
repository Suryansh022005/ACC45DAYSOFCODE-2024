#include <stdio.h>

int min_deletes(int S, int X, int Y, int Z) {
    // First check if the available space is already enough
    if (S - (X + Y) >= Z) {
        return 0;  // No need to delete any apps
    }

    // Check if deleting one app will make space
    if (S - X >= Z || S - Y >= Z) {
        return 1;  // Need to delete one app
    }

    // If not, we need to delete both apps
    if (S >= Z) {
        return 2;  // Need to delete both apps
    }

    return -1;  // This case won't occur with valid inputs
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int S, X, Y, Z;
        // Read the values for S, X, Y, Z
        scanf("%d %d %d %d", &S, &X, &Y, &Z);

        // Output the result for each test case
        printf("%d\n", min_deletes(S, X, Y, Z));
    }

    return 0;
}
