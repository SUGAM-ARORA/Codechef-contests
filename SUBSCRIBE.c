#include<stdio.h>
int main()
{
    int T,X,i;
    scanf("%d",&T);
    for (i = 0; i < T; i++)
    {
        scanf("%d",&X);
        if (X<=30)
        {
            printf("NO\n");
        }
        else
        printf("YES\n");
        
    }
    
}