#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	int X,H;
	for(int i=0;i<T;i++){
	    scanf("%d %d",&X,&H);
	    if(X>=H)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

