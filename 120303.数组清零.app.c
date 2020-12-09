#include<stdio.h>
#include<windows.h>
void main(){
int b,c;
int a[20][10]={
    {1,1,1,1,1,1},
	{1,1,1,1,1,1}
};
for(b=0;b<20;b++){
	for(c=0;c<10;c++){
	a[b][c]=999;
	printf("%d ",a[b][c]);
	}
    printf("\n");
}
Sleep(0000);
for(b=0;b<20;b++){
	for(c=0;c<10;c++){
	a[b][c]=0;
	printf("%d ",a[b][c]);
	}
    printf("\n");
}
Sleep(5000);
for(b=0;b<20;b++){
	for(c=0;c<10;c++){
	a[b][c]=999;
	printf("%d ",a[b][c]);
	}
    printf("\n");
}
}
