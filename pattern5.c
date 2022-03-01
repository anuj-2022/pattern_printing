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
        for(j=0;j<2*n;j++)
        {
        if(j<=i || j>(2*(n-1)-i)) //i=1,n-5, j>(2*4-1); j>7
        printf("*");
    //    k--;
        else
        printf(" ");
        }  
        printf("\n");
        
    }
}

/*

*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************

*/
