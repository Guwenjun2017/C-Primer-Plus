#include<stdio.h>
int main(void)
{
    int i_income,i_workday,a;
    i_income = 0;
    a = 0;

    printf("请输入工作的总天数:");
    scanf("%d",&i_workday);
    while(a <= i_workday){
	i_income += a;
	a++;
    }
    printf("总收入:%d\n",i_income);

    return 0;
}
