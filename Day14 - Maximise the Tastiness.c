#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        int t1 = a + c;
        int t2 = a + d;
        int t3 = b + c;
        int t4 = b + d;

        int max_tastiness = t1;
        if (t2 > max_tastiness) {
            max_tastiness = t2;
        }
        if (t3 > max_tastiness) {
            max_tastiness = t3;
        }
        if (t4 > max_tastiness) {
            max_tastiness = t4;
        }

        
        printf("%d\n", max_tastiness);
    }

    return 0;
}
