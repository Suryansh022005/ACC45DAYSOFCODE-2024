#include <stdio.h>
int main() {
    int T, N, A, B, i, Duration;
    scanf("%d", &T);
    
    while (T--){
        scanf("%d %d %d", &N, &A, &B);
        Duration=0;
        
        for (i=1; i<=N; i++) {
            if(i%2==0) {
                Duration+=A;
            }
            else {
                Duration+=B;
            }
        }
        
        printf("%d\n", Duration);
    }
    return 0;
}