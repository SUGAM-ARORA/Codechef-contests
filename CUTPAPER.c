#include <stdio.h>

int main(void) {
	// your code goes here
    long T;
    scanf("%ld",&T);
    while(T--)
    {
        long N,K;
        scanf("%ld %ld",&N,&K);
        printf("\n %ld",(N/K)*(N/K));
    }
	return 0;
}

