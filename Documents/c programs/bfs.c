#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[20][20],q[20],p[20];
int vi[20],n,i,j,f=0,r=-1,p1=0,g;
void bfs(int v) {
for (i=1;i<=n;i++)
 if(a[v][i] && !vi[i])
  q[++r]=i;
if(f<=r) {
vi[q[f]]=1;
for(g=0;g<p1;g++){
if(p[g]==q[f])
break;
}
if(g==p1)
p[p1++]=q[f];

// printf("%d",q[f]);
bfs(q[f++]);
}
}
int main() {
int v;
printf("\n Enter the number of vertices:");
scanf("%d",&n);
for (i=1;i<=n;i++) {
q[i]=0;
vi[i]=0;
}
printf("\n Enter graph data in matrix form:\n");
for (i=1;i<=n;i++)
 for (j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
printf("\n Enter the starting vertex:");
scanf("%d",&v);
printf("%d:",v);
p[p1++]=v;
bfs(v);
printf("\n The node which are reachable are:\n");
for (i=1;i<=n;i++){
 if(vi[i])
  printf("%d\t",i);
 else
  printf("\n Bfs is not possible");
}
printf("the order of visiting the nodes in bfs are:\n");
for(i=0;i<p1;i++)
printf("%d",p[i]);
return 0;
}

