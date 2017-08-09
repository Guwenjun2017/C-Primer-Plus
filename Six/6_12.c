#include<stdio.h>
int main(void)
{
    double a=1.0;
    double b,c,d;
    int i,limit;         //此处i声明为int类型,应对%要求

    while((scanf("%d",&limit)) > 0)
    {
	if(limit > 0)
	{
	    i = 1;
	    c = 0;     //每次小循环后初始化c的值
	    while(i <= limit)
	    {
		b = a/i*1.0;
		c += b;
		i++;
	    }
	    printf("result:%f\n",c);
	    i = 1;     //初始化i的值,使下个小循环正常进行
	    d = 0;
	    while(i <= limit)
	    {
		if(i%2 == 0)         //双目运算符 % 操作数只能为int类型
		    b = a*(-1)/i*1.0;
		else
		    b = a/i*1.0;
		d += b;
		i++;
	  	}
	    printf("result:%f\n",d);
	}
    }

    return 0;
}

