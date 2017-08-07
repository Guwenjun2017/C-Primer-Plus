#include<stdio.h>
#define PER_FEET 30.48
#define PER_INCH 2.54
int main(void)
{
    float f_height,f_inch;
    int i_feet;

    printf("请输入您的身高(cm,'q' to quit.):");
    while(scanf("%f",&f_height) > 0){
	if(f_height > 0){
	    i_feet = f_height/PER_FEET;
	    f_inch = f_height/PER_INCH;
	    if(i_feet > 1 && f_inch >1)
	    printf("%.1f cm = %d feet or %.1finches.",f_height,i_feet,f_inch);
	    else if(i_feet >1 && f_inch <= 1)	
	    printf("%.1f cm = %d feet or %.1finch.",f_height,i_feet,f_inch);
	    else
	    printf("%.1f cm = %d foot or %.1finches.",f_height,i_feet,f_inch);
	    printf("\n请输入您的身高(cm):");
	}
	else{
	printf("亲!请输入正整数:\n");
	}
    } 

    return 0;
}
