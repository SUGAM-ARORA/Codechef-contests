#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int X;
        scanf("%d",&X);
        if(X<7)
        {
            printf("YES\n");
        }
        else 
        printf("NO\n");
    }
	return 0;
}

