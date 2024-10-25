#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Total count of problems
        scanf("%d", &N);
        
        // Initialize counters
        int start38_count = 0;
        int ltime108_count = 0;
        
        // Read the contest codes and count occurrences
        for (int i = 0; i < N; i++) {
            char contest_code[10]; // To store the contest code
            scanf("%s", contest_code);
            
            if (strcmp(contest_code, "START38") == 0) {
                start38_count++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                ltime108_count++;
            }
        }
        
        // Output the results for this test case
        printf("%d %d\n", start38_count, ltime108_count);
    }
    
    return 0;
}
