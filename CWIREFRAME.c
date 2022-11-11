#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d\n",&T);
	while(T--)
	{
	    int N,M,X;
	    scanf("%d %d %d",&N,&M,&X);
	    printf("%d\n",2*(N+M)*X);
	}
	return 0;
}

