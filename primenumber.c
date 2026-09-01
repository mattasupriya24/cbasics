#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Check how many divisors n has
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
