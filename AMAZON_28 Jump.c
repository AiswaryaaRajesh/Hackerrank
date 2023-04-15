#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int max_reach = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > max_reach) {
            return false;
        }
        max_reach = fmax(max_reach, i + nums[i]);
    }
    return true;
}

int main() {
    int nums[10000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    bool result = canJump(nums, n);
    printf("%s\n", result ? "true" : "false");
    return 0;
}
