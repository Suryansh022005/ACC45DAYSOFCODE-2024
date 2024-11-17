#include <stdio.h>

int main() {
	int T, X, Y, R;
	scanf("%d", &T);
	while (T--) {
	    scanf("%d %d %d", &X, &Y, &R);
	    if (((R / 30) + X) % Y == 0) {
	        printf("%d\n", ((R / 30 + X) / Y));
	    }
	    else {
	        printf("%d\n", ((R / 30 + X) / Y + 1));
	    }
	}
}

