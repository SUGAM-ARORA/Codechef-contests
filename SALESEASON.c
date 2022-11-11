#include <stdio.h>

int main(void) {
    int T,X;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d",&X);
    if(X<=100){
    printf("%d\n",X);
    }
    else if(X>=100 && X<=1000){
    printf("%d\n",X-25);
    }
    else if(X>1000 && X<=5000){
    printf("%d\n",X-100);
    }
    else{
    printf("%d\n",X-500);
    }
}
	return 0;
}