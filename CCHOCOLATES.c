#include <stdio.h>

int main() {
	int x,i;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
	    int U,Y,Z,A;
	    scanf("%d %d %d",&U,&Y,&Z);
	    A=(U*5+Y*10);
	    printf("%d\n",(A/Z));
	}
	return 0;
}


