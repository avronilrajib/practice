#include<stdio.h>
int main()
{

    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
             if((i==j&&i<4)||(j==n-i+1&&j>i)||j==n||j==1)
             printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

