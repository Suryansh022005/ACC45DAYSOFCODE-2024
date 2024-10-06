#include <stdio.h>

int max_months(int X, int Y) {
    if (X >= Y) {
        return 0;  
    }

    else{
        return (Y - 1) / X;
        }
    
}

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int X, Y;  
        scanf("%d %d", &X, &Y);
        printf("%d\n", max_months(X, Y));
    }

    return 0;
}

