#include<stdio.h>
int main(void)
{
    double u_Fahrenheit,u_Cel,u_Kelvin;
    void Temperature(double a);

    printf("请输入当前温度(华氏温度,'q' to quit):");
    while((scanf("%lf",&u_Fahrenheit) == 1)){
	printf("华氏温度 = %.2lf\n",u_Fahrenheit);
	Temperature(u_Fahrenheit);
	printf("继续请直接输入('q' to quit):");
    }

    return 0;
}
void Temperature(double a)
{
    const double b = 5.0/9.0;
    const double c = 273.16;

    printf("摄氏温度 = %.2lf\n",b*(a - 32.0));
    printf("开氏温度 = %.2lf\n",b*(a - 32.0) + c);
}
