#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
if(a%4==0&&a%100!=0||a%400==0){
printf("这是一个闰年");
}
else{
printf("这不是一个闰年");
}
}
