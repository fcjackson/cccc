#include<stdio.h>
void main(){
  int a,b,c,d,e;
  printf("请输入秒数：");
  scanf("%d",&a);
  if(a>=86400){
  printf("输入错误\n");
  }
  else{
  b=a/3600;
  c=(a%3600)/60;
  d=a-3600*b-60*c;
  printf("%02d时",b);
  printf("%02d分",c);
  printf("%02d秒",d);
  }
}
