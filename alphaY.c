#include<stdio.h>
int main()
{

    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        if((j==n/2+1&&j<=i-1)||(i==j&&i<4)||(j==n-i+1&&j>i))
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


