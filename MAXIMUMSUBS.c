#include <stdio.h>

int main(void) 
{
	int T,i;
	scanf("%d",&T);
	
	int X;
	for(i=1;i<=T;i++)
	{
	    scanf("%d",&X);
	    printf("%d\n",X*2);
	}
	
	return 0;
}
