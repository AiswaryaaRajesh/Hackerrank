#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cases;
    scanf("%d",&cases);
    while(cases)
    {
        int num, i;
        scanf("%d", &num);
        for (i = 1; i <= num; ++i) 
            if (num % i == 0) 
                printf("%d ", i);
        printf("\n");
        cases--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
