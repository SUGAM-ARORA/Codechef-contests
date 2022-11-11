#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int A,B,C;
	    scanf("%d%d%d",&A,&B,&C);
	    if((A+B)%2!=0 || (B+C)%2!=0 || (C+A)%2!=0)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	}
	return 0;
}

