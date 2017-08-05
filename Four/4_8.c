#include<stdio.h>
#define mileageTokilm 1.609
#define gallonToliter 3.785
int main(void)
{
    float f_mileage,f_gasoline;

    printf("请输入旅行的里程(英里):");
    scanf("%f",&f_mileage);
    printf("请输入消耗的汽油量(加仑):");
    scanf("%f",&f_gasoline);
    printf("耗油量%.1f(英里/加仑)\n",f_mileage/f_gasoline);
    printf("经单位转换得:\n");
    printf("旅行了%fkm,共消耗了%f升汽油.\n",f_mileage*mileageTokilm,f_gasoline*gallonToliter);
    printf("耗油量%.1f(升/千米)\n",(f_mileage*mileageTokilm)/(f_gasoline*gallonToliter));

    return 0;
}
