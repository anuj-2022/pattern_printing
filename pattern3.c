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
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        printf("* ");
        printf("\n");
    }
}

/*

* * * * * * * * * * 
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/
