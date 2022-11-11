#include <stdio.h>

int main(){
	int i,t,x,y,z;
	scanf("%d",&t);
	for (i=0;i<t;i++) 
	{
	scanf("%d %d %d",&x,&y,&z);
	if(x*y<=z)
	{
	    printf("Yes\n");
	}
	else
	{
	    printf("No\n");
	}
	}
	return 0;
}

