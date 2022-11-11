#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X<Y)
	    {
	        printf("REPAIR\n");
	    }
	    else if(X>Y)
	    {
	        printf("NEW PHONE\n");
	    }
	    else
	    printf("ANY\n");
	}
	return 0;
}

