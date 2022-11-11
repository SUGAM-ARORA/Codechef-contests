#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    int C=(Y*100/X);
	    if (C>=50)
	    {
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}

