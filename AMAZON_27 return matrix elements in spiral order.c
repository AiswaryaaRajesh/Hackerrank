#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    int direction = 0; // 0: right, 1: down, 2: left, 3: up
    while (top <= bottom && left <= right) {
        if (direction == 0) {
            for (int j = left; j <= right; j++) {
                printf("%d ", matrix[top][j]);
            }
            top++;
        } else if (direction == 1) {
            for (int i = top; i <= bottom; i++) {
                printf("%d ", matrix[i][right]);
            }
            right--;
        } else if (direction == 2) {
            for (int j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        } else if (direction == 3) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    return 0;
}
