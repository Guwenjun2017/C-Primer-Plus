#include<stdio.h>
int main(void)
{
    int i_row,i_column;

    for(i_row=1;i_row<=6;i_row++){
	for(i_column=1;i_column<=i_row;i_column++)
	    printf("%c",'G'-i_column);
	printf("\n");
    }

    return 0;
}
