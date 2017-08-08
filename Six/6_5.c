#include<stdio.h>
int main(void)
{
    int i_row,i_dvalue,i_blank,i,j;
    char letter,T;

    printf("请输入一个大写字母:");
    scanf("%c",&letter);
    i_dvalue = letter-'A'+1;
    for(i_row=1;i_row<=i_dvalue;i_row++)
    {
	T='A';
	for(i_blank=1;i_blank<=i_dvalue-i_row;i_blank++)
	    printf(" ");
	for(i=1;i<=i_row;i++){
	    printf("%c",T);
	    T++;
	}
	T--;
	for(j=1;j<=i_row-1;j++){
	    T--;
	    printf("%c",T);
	}
	printf("\n");
    }

    return 0;
}
