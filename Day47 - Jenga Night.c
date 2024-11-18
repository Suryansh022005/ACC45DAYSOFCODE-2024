#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    while (T--)
    {
        int N, X; 
        
        scanf("%d %d", &N, &X);
        
        if (X % N == 0) 
        {
            printf("YES\n");
        } 
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}