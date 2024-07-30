#include <stdio.h>
#include <stdlib.h>
int topo[10],k;
void dfs(int a[10][10],int n,int visted[10],int source)
{
  int i;
  visted[source]=1;
  for(i=1;i<=n;i++)
  {
      if(a[source][i]==1 && visted[i]==0)
        dfs(a,n,visted,i);
  topo[++k]=source;
  }
}

int main()
{
    int n,a[10][10],i,j,visted[10];
    printf("Read number of nodes:");
    scanf("%d",&n);
    printf("read adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
        visted[i]=0;
    for(i=1;i<+n;i++)
    {

       if(visted[i]==0)
       {
           dfs(a,n,visted,i);
       }
    }
  printf("\n topological ordering is:\n");
  for(i=k;i>=1;i--)
    printf("%d\t",topo[i]);
    return 0;
}

