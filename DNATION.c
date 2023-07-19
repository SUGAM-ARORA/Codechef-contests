#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    printf("%d\n",(y-x));
	}
	return 0;
}

