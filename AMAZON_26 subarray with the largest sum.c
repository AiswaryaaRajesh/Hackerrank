#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maxSubArray(int nums[], int n) {
    int maxSum = nums[0];  // Initialize maxSum with the first element of the array
    int currentSum = nums[0];  // Initialize currentSum with the first element of the array

    for (int i = 1; i < n; i++) {
        // Calculate the current sum by adding the current element to the current sum,
        // or starting a new sum if the current element is greater than the current sum
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        
        // Update maxSum if the current sum is greater than the current maxSum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int maxSum = maxSubArray(nums, n);
    printf("%d\n", maxSum);

    return 0;
}

