#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int A,B,C,D;
	    scanf("%d%d%d%d",&A,&B,&C,&D);
	    if (A==0 && B==0 && C==0 && D==0)
	    {
	        printf("IN\n");
	}
	else 
	printf("OUT\n");
	}
	return 0;
}

