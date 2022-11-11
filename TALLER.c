#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    return 0;
}



