#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,sum_square,i;
    int c;

    printf("Enter lower and upper integer limits:");
    while((scanf("%d %d",&a,&b)) > 0 && b-a > 0 ){     //巧用scanf的返回值.
	c = 0;     //每次循环前初始化c的值.
	for(i=a;i>=a && i<=b;i++){
	    c+=i*i;
	}
	printf("The sums of the squares from %d to %d is %d\n",a*a,b*b,c);
	printf("Enter next set of limits:");
    }
    printf("Done.\n");

    return 0;
}
