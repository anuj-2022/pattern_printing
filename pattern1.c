#include <stdio.h>

void pattern(void);

int main()
{   
    pattern();

    return 0;
}

void pattern(void)
{
    int i,j,n;
    printf("Enter the number of row");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
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
