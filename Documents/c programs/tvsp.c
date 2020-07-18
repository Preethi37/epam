#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	return a>b?a:b;
}
int parent(int **w,int v,int n){
	int i;
	for(i=0;i<n;i++){
		if(w[i][v]!=0)
		   return i;
	}
}
void tvsp(int **w,int n,int tol,int *d,int sv,int root){
	int i;
	d[sv]=0;
	for(i=0;i<n;i++){
		if(w[sv][i]!=0){
			tvsp(w,n,tol,d,i,root);
			 d[sv]=max(d[sv],d[i]+w[sv][i]);
		}
	}
	if((sv!=root) &&(d[sv]+w[parent(w,sv,n)][sv]>tol)){
	printf("%d",sv);
	d[sv]=0;
	}
}
int main()
{
	int n,**w,i,e,p,q,r,tol,*d;
	printf("enter number of nodes in tree:");
	scanf("%d",&n);
	w=calloc(n,sizeof(int*));
	for(i=0;i<n;i++)
	w[i]=calloc(n,sizeof(int));
	d=calloc(n,sizeof(int));
	printf("enter no of edges:");
	scanf("%d",&e);
	printf("enter edges and weights\n");
	for(i=0;i<e;i++){
		scanf("%d%d%d",&p,&q,&r);
		w[p][q]=r;
	}
	printf("enter value of tolerance:");
	scanf("%d",&tol);
	tvsp(w,n,tol,d,0,0);
	printf("\n");
	return 0;
}
