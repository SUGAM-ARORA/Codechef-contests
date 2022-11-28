#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int R1,R2,R3;
	    scanf("%d%d%d",&R1,&R2,&R3);
	    if((R1+R2)<R3 || (R2+R3)<R1 || (R1+R3)<R2 )
	    {
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}

