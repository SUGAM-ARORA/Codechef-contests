#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X;
	    scanf("%d\n",&X);
	    if(X>50)
	    {
	        printf("RIGHT\n");
	    }
	    else
	    printf("LEFT\n");
	}
	return 0;
}

