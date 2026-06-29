#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the size of the array

    int count2 = 0, count3 = 0;
    for (int i = 0; i < N; i++) {
        long long num;
        scanf("%lld", &num);  // Read each element

        if (num % 2 == 0) {
            count2++;  // Divisible by 2
        } else if (num % 3 == 0) {
            count3++;  
        }
    }

    printf("%d %d\n", count2, count3);
    return 0;
}
