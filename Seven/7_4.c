#include<stdio.h>
int main(void)
{
    int i_change = 0;
    char ch;

    while((ch = getchar()) != '#')
    {
	if(ch == '.'){
	    i_change++;
	    putchar('!');
	}
	else if(ch == '!'){
	    i_change++;
	    putchar('!');
	    putchar('!');
	}
    }
    printf("\n");
    printf("替换次数:%d\n",i_change);

    return 0;
}
