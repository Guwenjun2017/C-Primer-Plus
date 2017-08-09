#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[50];
    int i;

    printf("请输入单词:");
    gets(str);
    for(i=strlen(str)-1;i>=0;i--)
	printf("%c",str[i]);

    return 0;
}
