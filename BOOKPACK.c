#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y,Z,A;
	    scanf("%d%d%d",&X,&Y,&Z);
	    if(Y%Z==0)
	    {
	        A=X*(Y/Z);
	        printf("%d\n",A);
	    }
	    else
	    {
	        A= X*(Y/Z +1);
	        printf("%d\n",A);
	    }
	   	}
	return 0;
}

