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
	k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n+k);j++)
        if(j<k)
        printf(" ");
	else 
	printf("*");
	k--;
        printf("\n");
        
    }
}

/*

	 **********
        **********
       **********
      **********
     **********
    **********
   **********
  **********
 **********
**********

*/
