#include <stdio.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {
        int start_time;
        scanf("%d", &start_time);

        if (start_time + 3 <= 10) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
