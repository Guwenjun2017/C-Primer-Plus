#include<stdio.h>
int main(void)
{
    int count;
    char ch1,ch2;

    printf("输入(以'#'结束):");
    while((ch2 = getchar()) != '#')
    {
	if((ch1 == 'e') && (ch2 == 'i'))
	    count++;
	ch1=ch2;
    }
    printf("%d\n",count);

    return 0;
}
