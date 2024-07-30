#include <stdio.h>

#include<stdlib.h>

void bfs(int a[10][10], int n, int v[10], int source)

{

int q[10], front=0, rear=-1;

int node, i;

v[source] = 1;

q[++rear] = source;

while(front <= rear)

{

node = q[front++];

for(i=1;i<=n;i++)

{

if(a[node][i] == 1 && v[i] == 0)

{

v[i] = 1;

q[++rear] = i;

}

}

}

}

int main()

{

int n,source,i,j,count;

int a[10][10],v[10];

printf("Enter no of nodes: ");

scanf("%d",&n);

printf("\n Read Adjacency matrix \n");

for(i=1;i<=n;i++)

for(j=1;j<=n;j++)

scanf("%d",&a[i][j]);

for(i=1;i<=n;i++)

v[i] = 0;

count = 0;

for(i=1;i<=n;i++)

{

if(v[i] == 0)

{

bfs(a,n,v,i);

count++;

}

}

if(count == 1)

printf("Graph is Connected");

else

printf("Graph is NOT Connected with %d Components\n",count);

return 0;

}
