#include <stdio.h>

int main()
{
	//Your code here
    int num,i,j;
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
	return 0;
}
