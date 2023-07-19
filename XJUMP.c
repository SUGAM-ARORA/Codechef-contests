#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y,Z;
	    scanf("%d%d",&X,&Y);
	    if(X%Y==0)
	    Z=X/Y;
	    else if (X<Y)
	    Z=X;
	    else if (Y==1)
	    Z=X;
	    else
	    Z=X/Y + X%Y;
	   printf("%d\n",Z);
	}
	return 0;
}

