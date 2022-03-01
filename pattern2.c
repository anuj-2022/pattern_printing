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
    printf("Enter the number of row");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
		for (j=n; j>i; j--)
			printf("  ");
//			printf("%d",i);
		for (k=0; k<=i; k++) 
			printf("* ");
		printf("\n");
	}
}

/*

		    * 
                  * * 
                * * * 
              * * * * 
            * * * * * 
          * * * * * * 
        * * * * * * * 
      * * * * * * * * 
    * * * * * * * * * 
  * * * * * * * * * * 

*/
