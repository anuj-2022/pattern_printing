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
 	  printf("%d ",i);
    //    k--;
        }  
        printf("\n");
        
    }
//	printf("END\n");
	for(i=n-1;i>=1;i--)
	{
	for(j=1;j<=i;j++)
	printf("%d ",i);
	printf("\n");
	}
}

/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 
9 9 9 9 9 9 9 9 9 
8 8 8 8 8 8 8 8 
7 7 7 7 7 7 7 
6 6 6 6 6 6 
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 

*/
