#include<stdio.h>
int main(void)
{
    float num1,num2;

    printf("请输入两个浮点数(以逗号隔开):");
    while((scanf("%f,%f",&num1,&num2)) > 0){
	printf("%f\n",(num1-num2)/(num1*num2));
	printf("Again.('q' to quit)");
    }

    return 0;
}
