#include<stdio.h>
int main(void)
{
    int num = 0;
    char ch;
    
    printf("输入字符(以'#'字符结束):\n");
    while((ch = getchar()) != '#')
    {
	num++;
	printf("%c %d\t",ch,ch);
	if(num%8 == 0)
	    printf("\n");
    }
    printf("\n");

    return 0;
}
