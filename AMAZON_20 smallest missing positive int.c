#include <stdio.h>
#include <stdlib.h>

int find_smallest_missing_positive(int nums[], int n) {
    int i;
   
     for (i = 0; i < n; i++) {
        if (nums[i] > 0 && nums[i] <= n) {
            nums[nums[i]-1] = -abs(nums[nums[i]-1]); 
        }
    }
   
    for (i = 0; i < n; i++) {
        if (nums[i] > 0) {
            return i+1;
        }
    }
   
    return n+1;
}

int main() {
    int n;
    scanf("%d", &n);
   
    int nums[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
   
    int smallest_missing_positive = find_smallest_missing_positive(nums, n);
    printf("%d", smallest_missing_positive);
   
    return 0;
}
