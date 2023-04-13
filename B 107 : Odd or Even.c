#include <stdio.h>

int main()
{
	int var, input_count = 0;
	//write your code here
    while(input_count<5)
    {
        scanf("%d",&var);
        if(var%2!=0)
            printf("odd\n");
        else
            printf("even\n");
        input_count+=1;
    }
	return 0;
}
