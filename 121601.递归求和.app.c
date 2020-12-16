#include<stdio.h>
int i(int a){
	if(a<=0){
	return  0;
	}
	return a+i(a-1);
}
void main(){
int x;
scanf("%d",&x);
printf("%d\n",i(x));
}
