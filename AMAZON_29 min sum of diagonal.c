#include <stdio.h>

#define MAX_SIZE 200

int grid[MAX_SIZE][MAX_SIZE];

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // input grid values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // compute minimum path sum
    for (int i = 1; i < n; i++) {
        grid[i][0] += grid[i - 1][0];
    }
    for (int j = 1; j < m; j++) {
        grid[0][j] += grid[0][j - 1];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
        }
    }

    // output result
    printf("%d\n", grid[n - 1][m - 1]);

    return 0;
}
