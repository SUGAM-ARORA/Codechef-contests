#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,X,C;
	    scanf("%d%d",&N,&X);
	    C=(N*X);
	    if(C%4==0)
	    C=C/4;
	    else 
	    C=(C/4)+1;
	    printf("%d\n",C);
	}
	return 0;
}

