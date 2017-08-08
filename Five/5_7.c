#include<stdio.h>
int main(void)
{
    double u_a;
    void cube(double a);

    printf("请输入您的值:");
    scanf("%lf",&u_a);
    cube(u_a);

    return 0;
}

void cube(double a)
{
    printf("%lf\n",a*a*a);
}
