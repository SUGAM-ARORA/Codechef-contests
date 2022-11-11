#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X;
	    scanf("%d",&X);
	    if(X>100)
	    {
	        X=X-10;
	        printf("%d\n",X);
	    }
	    else
	    printf("%d\n",X);
	}
	return 0;
}

