#include<stdio.h>
void work(){
printf("晚上好，读书人！\n");
}
void main(){
     work();
}
