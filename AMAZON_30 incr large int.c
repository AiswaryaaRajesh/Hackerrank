#include <stdio.h>

int main() {
    int n, digits[100], carry = 1;

    // Input
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }

    // Add 1 to the number
    for (int i = n - 1; i >= 0 && carry; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    // If there's still a carry, add an extra digit
    if (carry) {
        n++;
        digits[0] = 1;
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        printf("%d ", digits[i]);
    }

    return 0;
}
