#include <stdio.h>

int main() {
    long long n, m, x, y;
    scanf("%lld %lld %lld %lld", &n, &m, &x, &y);
    long long numerator = m + n * y;
    long long denominator = x + y;
    long long evolutions = numerator / denominator;
    if (evolutions > n) {
        evolutions = n;
    }
    printf("%lld\n", evolutions);
    return 0;
}
