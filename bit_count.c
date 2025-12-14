/* 
 * ATTENTION!
 * This task does not have an enforced
 * template in this language!
 *
 * However, you can still submit any custom code.
 */

#include <stdio.h>

int countBits(int n){
    int count = 0;
    while (n > 0){
        n &= (n-1);
        count++;
    }
    return count;
}

int main() {
    int number;
    scanf("%d", &number);
    int n_ones = countBits(number);
    printf("%d", n_ones);
}
