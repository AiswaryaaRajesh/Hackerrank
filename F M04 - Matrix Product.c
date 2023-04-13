#include <stdio.h>

void multiplyMatrices(int n1, int m1, int matrix1[][m1], int n2, int m2, int matrix2[][m2], int result[][m2]) {
    int i, j, k;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < m2; j++) {
            result[i][j] = 0;
            for (k = 0; k < m1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int n1, m1, n2, m2;
    scanf("%d %d", &n1, &m1);
    int matrix1[n1][m1];
    int i, j;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < m1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    scanf("%d %d", &n2, &m2);
    int matrix2[n2][m2];
    for (i = 0; i < n2; i++) {
        for (j = 0; j < m2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (m1 != n2) {
        printf("-1\n");
        return 0;
    }

    int result[n1][m2];
    multiplyMatrices(n1, m1, matrix1, n2, m2, matrix2, result);

    for (i = 0; i < n1; i++) {
        for (j = 0; j < m2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
