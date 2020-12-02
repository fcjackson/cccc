#include<stdio.h>
void main(){
  char a;
	printf("欢迎使用此程序\n");
	scanf("%c",&a);
	switch(a){
	case 'a':printf("你在点击'上'健\n");break;
  case 's':printf("你在点击'下'健\n");break;
  case 'd':printf("你在点击'左'健\n");break;
	case 'w':printf("你在点击'右'健\n");break;
	default:printf("你点啥呢\n");
	}

}

