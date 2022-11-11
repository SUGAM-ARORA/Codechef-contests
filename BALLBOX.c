#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,K;
	    scanf("%d%d",&N,&K);
	    if ( (K*(K+1))/2 <= N)
	    {
	        printf("YES\n");
	    }
	    else 
	    printf("NO\n");
	}
	return 0;
}

