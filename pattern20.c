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
    char ch=65,c=97;
    printf("Enter the number of row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
	{
	if((k%2)==0)
        printf("%c ",c);
	else 
	printf("%c ",ch);
	}
        printf("\n");
	k++;
	ch++;
	c++;
    }
}

/*

A 
b b 
C C C 
d d d d 
E E E E E 
f f f f f f 
G G G G G G G 
h h h h h h h h 
I I I I I I I I I 
j j j j j j j j j j 
K K K K K K K K K K K 
l l l l l l l l l l l l 
M M M M M M M M M M M M M 
n n n n n n n n n n n n n n 
O O O O O O O O O O O O O O O 
p p p p p p p p p p p p p p p p 
Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q 
r r r r r r r r r r r r r r r r r r 
S S S S S S S S S S S S S S S S S S S 
t t t t t t t t t t t t t t t t t t t t 
U U U U U U U U U U U U U U U U U U U U U 
v v v v v v v v v v v v v v v v v v v v v v 
W W W W W W W W W W W W W W W W W W W W W W W 
x x x x x x x x x x x x x x x x x x x x x x x x 
Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y 
z z z z z z z z z z z z z z z z z z z z z z z z z z 
 
 

*/
