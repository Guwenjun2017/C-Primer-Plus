#include<stdio.h>
int main(void)
{
    int num1,num2,a;

    printf("请输入行列上限(以逗号隔开):");
    scanf("%d,%d",&num1,&num2);
    for(a=num1;a >= num1 && a <= num2;a++)
    {
	printf("%d\t",a);
	printf("%d\t",a*a);
	printf("%d\n",a*a*a);
    }

    return 0;
} 
