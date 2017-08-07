#include<stdio.h>					    //暂留字母Bug
int main(void)
{
    int i,i_num1;
    printf("请输入一个整数:");
    scanf("%d",&i_num1);
    for(i = i_num1;i <= i_num1+10;i++){
	printf("%d\n",i);
    }
}
