#include<stdio.h>
void main(){
int i=91;
int b,c;
int a[9][10]={
    {1,1,1,1,1,1},
	  {1,1,1,1,1,1}
};
for(b=0;b<9;b++){
	for(c=0;c<10;c++){
	a[b][c]=0;
  i--;
	a[b][c]=i;
	printf("%d ",a[b][c]);
	}
    printf("\n");
}
}
