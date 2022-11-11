#include <stdio.h>

int main(void) {
	int T,X,Y,Z,W;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    scanf("%d%d%d",&X,&Y,&Z);
	    W=(X-Y)+Z;
	    printf("%d\n",W);
	}
	return 0;
}

