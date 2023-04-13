#include <stdio.h>

int trap_water(int height[], int n) {
    int left = 0, right = n-1;
    int left_max = 0, right_max = 0;
    int total_water = 0;
   
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] > left_max) {
                left_max = height[left];
            } else {
                total_water += left_max - height[left];
            }
            left++;
        } else {
            if (height[right] > right_max) {
                right_max = height[right];
            } else {
                total_water += right_max - height[right];
            }
            right--;
        }
    }
   
    return total_water;
}

int main() {
    int n;
    scanf("%d", &n);
   
    int height[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }
   
    int total_water = trap_water(height, n);
    printf("%d", total_water);
   
    return 0;
}
