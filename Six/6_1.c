#include<stdio.h>
int main(void)
{
    int i;
    const char a[]="abcdefghijklmnopqrstuvwxyz";
    
    for(i=0;i<26;i++){
	printf("%c\n",a[i]);
    }

    return 0;
}
