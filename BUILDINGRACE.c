#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    float A,B,X,Y;
	    scanf("%d %d %d %d",&A,&B,&X,&Y);
	    float C=A/X;
	    float D=B/Y;
	    if (D>C)
	    {
	        printf("Chef\n");
	    }
	    else if (C>D)
	    {
	        printf("Chefina\n");
	    }
	    else
	    {
	        printf("Both\n");
	    }
	}
	return 0;
}

