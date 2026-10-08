#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int and_max = 0, or_max = 0, xor_max = 0;

    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int x = a & b;
            int y = a | b;
            int z = a ^ b;

            if (x < k && x > and_max) and_max = x;
            if (y < k && y > or_max)  or_max = y;
            if (z < k && z > xor_max) xor_max = z;
        }
    }

    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
