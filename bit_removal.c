/* 
 * ATTENTION!
 * This task does not have an enforced
 * template in this language!
 *
 * However, you can still submit any custom code.
 */

#include <stdio.h>

unsigned int bit_removal (unsigned int x, unsigned int y){
    unsigned int b_xy = x&y;
    unsigned int result = x^b_xy;
    return result;
}

int main() {
    unsigned int t, x, y, result;
    scanf("%u", &t);
    unsigned int results[t];
    for(int i; i < t; i++){
        scanf("%u %u", &x, &y);
        result = bit_removal(x, y);
        results[i] = result;
    }
    for(int i; i < t; i++){
        printf("\n%u", results[i]);
    }
    return 0;
}
