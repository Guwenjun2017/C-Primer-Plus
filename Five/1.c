#include<stdio.h>
#define PER_HOUR 60
int main(void)
{
    int i_minute,i_hour,i_left;

    printf("请输入总分钟数(q键退出):\n");
    while(scanf("%d",&i_minute) > 0){
	if((i_hour = i_minute/PER_HOUR) > 0)
	    printf("%dhours,",i_hour);
	else
	    printf("%dhour,",i_hour);
	if((i_left = i_minute%PER_HOUR) > 0)
	    printf("%dminutes\n",i_left);
	else
	    printf("%dminute\n",i_left);
    }
    return 0;
}
