#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); 

        int R = log2(N); 
        int totaltime = R * A + (R - 1) * B;

        printf("%d\n", totaltime); 
    }

    return 0;
}