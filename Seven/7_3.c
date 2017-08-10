#include<stdio.h>
int main(void)
    {
    int a;
    int n_ou = 0;
    int n_ji = 0;
    int sum_ou = 0;
    int sum_ji = 0;
    
    printf("输入整数(以换行符隔开):\n");
    while((scanf("%d",&a)) != 0 && a != 0)
    {
	if(a%2 == 0)
	{
	    n_ou++;
	    sum_ou += a;
	}
	else
	{
	    n_ji++;
	    sum_ji += a;
	}
    }
    printf("偶数的个数:%d,它们的平均数:%f\n",n_ou,sum_ou*1.0/n_ou);
    printf("奇数的个数:%d,它们的平均数:%f\n",n_ji,sum_ji*1.0/n_ji);

    return 0;
}
