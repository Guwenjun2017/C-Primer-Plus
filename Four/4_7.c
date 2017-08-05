#include<stdio.h>
#include<float.h>
int main(void)
{
    double d_number1=1.0/3.0;
    float f_number2=1.0/3.0;

    printf("%.6lf,%.6f\n",d_number1,f_number2);
    printf("%.12lf,%.12f\n",d_number1,f_number2);
    printf("%.16lf,%.16f\n",d_number1,f_number2);
    printf("%d,%d\n",FLT_DIG,DBL_DIG);

    return 0;
}
