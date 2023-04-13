#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input the number of days

    int a[n], p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &p[i]); // Input the amount of Paneer needed and its cost for each day
    }

    int minCost = p[0]; // Initialize the minimum cost with the cost of Paneer on the first day
    long long totalCost = 0; // Initialize the total cost as a long long to handle large inputs

    for (int i = 0; i < n; i++) {
        if (p[i] < minCost) {
            minCost = p[i]; // Update the minimum cost if a lower cost is encountered
        }
        totalCost += (long long) minCost * a[i]; // Add the cost of Paneer for the current day to the total cost
    }

    printf("%lld\n", totalCost); // Output the minimum total cost
    return 0;
}
