#include <stdio.h>

void pattern(void);

int main()
{   
    pattern();

    return 0;
}

void pattern(void)
{
    int i,j,n,k=1,l=1;
    printf("Enter the number of row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
	{
	if((k%2)==0)
        printf("* ");
	else 
	printf("%d ",l);
	}
        printf("\n");
	if((i%2)==0)
	l++;
	k++;
    }
}

/*

1 
* * 
2 2 2 
* * * * 
3 3 3 3 3 
* * * * * * 
 

*/
