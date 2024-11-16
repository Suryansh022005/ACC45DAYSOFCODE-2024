#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T!=0)
    {
        int n;
        scanf("%d", &n);
         printf("%d \n",(n-(n/5)));
        T--;
    }
	return 0;
}
