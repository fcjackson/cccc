#include<stdio.h>
#include<string.h>
void main(){
char i[20];
char a[]="春节";
char b[]="端午节";
char c[]="中秋节";
char d[]="元宵节";
printf("欢迎使用吃货小程序，说说康今天啥节吃啥叭\n");
scanf("%s",&i);
if(strcmp(a,i)==0){
    printf("俺要吃饺子!\n");
}
else if(strcmp(b,i)==0){
    printf("俺要吃粽子!\n");
}
else if(strcmp(c,i)==0){
    printf("俺要吃月饼!\n");
}
else if(strcmp(d,i)==0){
    printf("俺要吃汤圆!\n");
}
else{
    printf("给爷吃!使劲吃多吃点你太瘦了!\n");
}
}
