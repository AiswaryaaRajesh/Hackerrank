#include <stdio.h>

int main()
{
	int n,i;
    scanf("%d",&n);
    if(n==1)
    {
        printf("no");
    }
    else if (n==2 || n==3)
    {
        printf("yes");
    }
    else if (n%2==0 || n%3==0)
    {
        printf("no");
    }
    else
    {
        for(i=5;i*i<=n;i+=6)
        {
            if (n%i==0 || n%(i+2)==0)
            {
                 printf("no");
                 break;
            }
        }
        printf("yes");
    }
}
