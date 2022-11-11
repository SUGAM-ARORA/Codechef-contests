#include <stdio.h>

int main(void) 
   {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int A,B,C,D,x,y;
	    scanf("%d %d %d %d",&A,&B,&C,&D);
	    x=A-C;
	    y=B-D;
	    if(x<y)
	    printf("FIRST\n");
	    else if(x>y)
	    printf("SECOND\n");
	    else if(x==y)
	    printf("ANY\n");
	}
	return 0;
}
