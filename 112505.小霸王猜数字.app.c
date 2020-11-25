#include<stdio.h>
#include<windows.h>
void main(){
while(1){	
int a=4;
int b;
printf("友情提示：只能输入0-10\n");
scanf("%d",&b);
if(b==4){
printf("猜对了，针不戳！\n");
}
else if(b>4){
printf("猜太大了，你是猪吗？\n");
}
else{
printf("猜太小了，你是猪吧？\n");
}

}}
