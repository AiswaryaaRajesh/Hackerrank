#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int prev,new;
    scanf("%d %d", &prev, &new);
    if (prev==new)
        printf("Did not participate");
    else if (prev>new)
        printf("Did not perform well");
    else
        printf("Performed well");
    return 0;
}
