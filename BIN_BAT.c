#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,A,B;
	    scanf("%d%d%d",&N,&A,&B);
	    int res=log2(N);
	    int X=res*A +(res-1)*B;
	    printf("%d\n",X);
	}
	return 0;
}

