#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	 int A,B,X,Y;
	 scanf("%d%d%d%d",&A,&B,&X,&Y);
	  int temp =(A-B);
	    if(temp==0)
	    {
	    printf("YES\n");
	    }
	    else if(temp<0)
	    {
	        if(abs(temp)<=X)
	        printf("YES\n");
	        else
	         printf("NO\n");
	     }
	    else
	    {
	        if(abs(temp)<=Y)
	       {
	           printf("YES\n");
	       }
	        else
	       {
	           printf("NO\n");
	       }
	    }
	}
	return 0;
}


