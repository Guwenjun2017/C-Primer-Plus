#include<stdio.h>
int main(void)
{
    int i;
    const char a[]={
	'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
    };
    
    for(i=0;i<26;i++){
	printf("%c",a[i]);
    }

    return 0;
}
