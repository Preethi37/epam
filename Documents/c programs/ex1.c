#include<stdio.h>
int f(){
	return (1,2,3,4,5);
}
main(){
	printf("%d",f());
}
//output is last value in return ; i.e;5.
