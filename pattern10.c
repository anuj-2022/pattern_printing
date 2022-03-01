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
    for(j=0;j<n-i;j++)
    printf(" "); 

    for(k=0;k<(2*i-1);k++)
    printf("*");
    printf("\n"); 
  }

}

/*

 
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************

*/
