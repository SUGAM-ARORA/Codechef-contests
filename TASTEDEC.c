#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if ((2*X)>(5*Y))
	    {
	        printf("Chocolate\n");
	    }
	    else if ((2*X)<(5*Y))
	    {
	        printf("Candy\n");
	    }
	    else
	    printf("Either\n");
	}
	return 0;
}

