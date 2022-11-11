#include <stdio.h>

int main(void)
{
	int T,sum=0,max;
	scanf("%d",&T);
	while(T--)
	{
	    int i,N;
	    sum=0;
	    max = -1;
	    scanf("%d",&N);
	    N--;
	    int p[N];
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&p[i]);
	        sum+=p[i];
	        if(max<p[i])
	        max = p[i];
	    }
	    sum+=max;
	    printf("%d\n",sum);
	}
	return 0;
}
