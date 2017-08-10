#include<stdio.h>
int main(void)
{
    int n_blank = 0;
    int n_n = 0;
    int n_other = 0;
    char ch;

    printf("输入字符:");
    while((ch = getchar()) != '#')
    {
	if(ch == ' ')
	    n_blank++;
	else if(ch == '\n')
	    n_n++;
	else
	    n_other++;
    }
    printf("n_blank:%d\n",n_blank);
    printf("n_n:%d\n",n_n);
    printf("n_other:%d\n",n_other);

    return 0;
}
