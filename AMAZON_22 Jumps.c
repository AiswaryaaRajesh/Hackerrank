#include <stdio.h>
#include <stdlib.h>

int minJumps(int* nums, int n) {
    if (n == 1) return 0;
    int maxReach = nums[0], steps = nums[0], jumps = 1;
    for (int i = 1; i < n; i++) {
        if (i == n - 1) return jumps;
        maxReach = (maxReach > i + nums[i]) ? maxReach : i + nums[i];
        steps--;
        if (steps == 0) {
            jumps++;
            steps = maxReach - i;
        }
    }
    return jumps;
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", minJumps(nums, n));
    return 0;
}
