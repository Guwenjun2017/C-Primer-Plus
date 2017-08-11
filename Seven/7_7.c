#include<stdio.h>
#define PERHOUR 1000
#define rate1 0.15
#define rate2 0.20
#define rate3 0.25
int main(void)
{
    int hour;
    float sum_money,cost_money,get_money;   //sum_money定为float类型非常重要

    printf("一周工作的时长:");
    scanf("%d",&hour);
    if(hour <= 40)
    {
	sum_money = PERHOUR*hour;
	if(sum_money <= 300)
	    cost_money = sum_money*rate1;
	else if(sum_money <= 450)
	    cost_money = 300*rate1+(sum_money-300)*rate2;
	else
	    cost_money = 300*rate1+150*rate2+(sum_money-450)*rate3;
    }
    else
    {
	hour *= 1.5;
	sum_money = PERHOUR*hour;
	if(sum_money <= 300)
	    cost_money = sum_money*rate1;
	else if(sum_money <= 450)
	    cost_money = 300*rate1+(sum_money-300)*rate2;
	else
	    cost_money = 300*rate1+150*rate2+(sum_money-450)*rate3;
    }
    get_money = sum_money-cost_money;
    printf("工资总额:%f$\t税金:%f$\t净收入:%f$\t\n",sum_money,cost_money,get_money);

    return 0;
}
