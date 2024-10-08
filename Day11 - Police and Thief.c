#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; // Positions of policeman and thief
        scanf("%d %d", &X, &Y);
        
        int time;
        if (X <= Y) {
            time = Y - X; // Thief is ahead or at the same position
        } else {
            time = X - Y; // Policeman is ahead
        }
        
        printf("%d\n", time); 
    }
    
    return 0;
}
