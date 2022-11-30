#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,M;
	    scanf("%d%d",&N,&M);
	    printf("%d\n",(N*5)+(M*7));
	}
	return 0;
}

