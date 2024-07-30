#include <stdio.h>
#include <stdlib.h>
int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;

}
void floyd(int n, int d[10][10])
{
    int i,j,k;
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

            }

        }
    }
}
    int main()
    {
        int n,a[10][10];
        int i,j,k;
        printf("enter number of nodes \n");
        scanf("%d",&n);
        printf("\n enter adjacency matrix \n ");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        floyd(n,a);
        printf("the all pair shortest distance is : \n");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                printf("5%d",a[i][j]);

            }
        }

        return 0;
    }
