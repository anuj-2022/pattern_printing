#include <stdio.h>

void pattern(void);

int main()
{
    pattern();

    return 0;
}

void pattern(void)
{
    int i,j,k=0,n;
    printf("Enter the Row number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
 	  printf("%d ",j);
    //    k--;
        }  
        printf("\n");
        
    }
	for(i=n-1;i>=1;i--)
	{
	for(j=1;j<=i;j++)
	printf("%d ",j);
	printf("\n");
	}
}
/*

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1

*/
