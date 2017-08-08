#include<stdio.h>
float function(float a,float b);
int main(void)
{
    float num1,num2;

    printf("请输入两个浮点数(以逗号隔开):");
    while((scanf("%f,%f",&num1,&num2)) > 0){
	printf("%f\n",function(num1,num2));
	printf("Again.('q' to quit)");
    }

    return 0;
}

float function(float a,float b)
{
    float c;

    c = (a-b)/(a*b);

    return c;
}
