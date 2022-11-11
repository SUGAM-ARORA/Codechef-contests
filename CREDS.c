#include <stdio.h>

int main() {
    int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    int a=(4*X) + (2*Y);
	    printf("%d \n",a);
	}
	return 0;
}

