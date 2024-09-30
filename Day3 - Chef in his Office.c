#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int X, Y;  
        scanf("%d %d", &X, &Y);

       
        int total_hours = 4 * X + Y;

        
        printf("%d\n", total_hours);
    }

    return 0;
}