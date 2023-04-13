#include <stdio.h>

void transpose(int n, int m, int matrix[][m]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(n, m, matrix);

    return 0;
}
