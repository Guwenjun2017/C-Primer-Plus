#include<stdio.h>
int main(void)
{
    int i_row,i_column;
    char A='A'-1;

    for(i_row=1;i_row<=6;i_row++){
	for(i_column=1;i_column<=i_row;i_column++){
	    A++;
	    printf("%c",A);
	}
	printf("\n");
    }

    return 0;
}

