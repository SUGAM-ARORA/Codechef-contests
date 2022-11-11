#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i,j,k,count=0,X=0,Y=0;
        scanf("%d",&k);
        int a[k];
        for(i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<k-1;i++)
        {
            count=0;
            for(j=i+1;j<k;j++)
            {
                if(a[i]==a[j])
                {   
                    count++;
                }
            }
            if(X<count)
                X=count;
            else if(X==count)
                Y=count;
            }
        printf(Y<X?"YES\n":"NO\n");
    }
    return 0;
}
