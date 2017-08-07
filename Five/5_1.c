#include<stdio.h>                                           //暂留Bug,输入字母无限循环.
#define PER_HOUR 60
int main(void)
{
    int i_minute,i_hour,i_left;

    printf("请输入总分钟数:\n");
    scanf("%d",&i_minute);
    while( i_minute> 0){
	if((i_hour = i_minute/PER_HOUR) > 0)
	    printf("%dhours,",i_hour);
	else
	    printf("%dhour,",i_hour);
	if((i_left = i_minute%PER_HOUR) > 0)
	    printf("%dminutes\n",i_left);
	else
	    printf("%dminute\n",i_left);
	    scanf("%d",&i_minute);
    }
	
    return 0;
}
