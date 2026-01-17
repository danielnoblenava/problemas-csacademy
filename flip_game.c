#include <stdio.h>
#include <stdlib.h>

/*
problema: Flipgame
URL: https://www.csacademy.com/contest/archive/task/flip-game/
*/

int main() {
    int N, M;

    if (scanf("%d %d", &N, &M) != 2) {
        return 1;
    }

    int **matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (int *)malloc(M * sizeof(int));
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        if (matrix[i][0] == 0) {
            // Flip the entire row
            for (int j = 0; j < M; j++) {
                matrix[i][j] ^= 1; // XOR with 1 toggles 0/1
            }
        }
    }

    unsigned long long total_sum = 0;

    for (int j = 0; j < M; j++) {
        int ones_count = 0;
        
        for (int i = 0; i < N; i++) {
            if (matrix[i][j] == 1) {
                ones_count++;
            }
        }

        int max_bits = (ones_count > (N - ones_count)) ? ones_count : (N - ones_count);
        
        total_sum += (unsigned long long)max_bits * (1ULL << (M - 1 - j));
    }

    printf("%llu\n", total_sum);

    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
