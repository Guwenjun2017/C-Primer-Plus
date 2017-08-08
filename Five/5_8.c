#include<stdio.h>
int main(void)
{
    int i_first,i_second;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&i_second);
    printf("Now enter number for first operand:");
    while((scanf("%d",&i_first)) > 0){
	if(i_first > 0){
	printf("%d %% %d is %d\n",i_first,i_second,i_first%i_second);
	printf("Enter next number for first operand(<= 0 to quit):");
	}
	else 
	    break;
    }

    return 0;
}
