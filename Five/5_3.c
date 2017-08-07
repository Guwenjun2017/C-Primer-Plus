#include<stdio.h>						    //暂留字母Bug
#define PER_WEEK 7
int main(void)
{
    int i_day,i_week,i_left;

    printf("请输入总天数:");
    scanf("%d",&i_day);
    while(i_day > 0){
	printf("%ddays are ",i_day);
	if((i_week = i_day/PER_WEEK) > 1)
	    printf("%dweeks",i_week);
	else
	    printf("%dweek",i_week);
	if((i_left = i_day%PER_WEEK) > 1)
	    printf(",%ddays\n",i_left);
	else
	    printf(",%dday\n",i_left);
	scanf("%d",&i_day);
	}

    return 0;
}
