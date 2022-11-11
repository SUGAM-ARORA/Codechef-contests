#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y;
	    scanf("%d%d",&X,&Y);
	    int Z=X-Y;
	    printf("%d\n",Z);
	}
	return 0;
}
