#include<stdio.h>
#include<string.h>
void main(){
char l[]="芒果";
char i[20];
int  a=6;
int  b;
printf("只能猜1-20噢，来猜猜看叭!\n");
while(1){
	scanf("%s",&i);
if( strcmp(l,i) ==0 ){
   printf("开始咯!\n");
   scanf("%d",&b);
  if(b==6){
   printf("猜对啦!"); 
  }
  else if(b>6){
  printf("猜啥呢!");
  }
  else{
	  printf("猜嘛呢!");
  }
}
else{
	printf("别猜了傻der!");
}
}
}
