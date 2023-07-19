#include <stdio.h>

int main(void) {
	// your code goes here
    int A,B,X,Y;
    scanf("%d%d%d%d",&A,&B,&X,&Y);
    int C,D ;
    C= A*2 + B;
    D= X*2 + Y;
    if (C>D)
    printf("Messi\n");
    else if (C<D)
    printf("Ronaldo\n");
    else
    printf("Equal\n");
	return 0;
}

