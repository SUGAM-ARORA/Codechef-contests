#include <stdio.h>

int prime(int n)
{
    if(n<2 || (!(n&1) && n!=2))
    {
        return 0;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(!(n%i))
        {
            return 0;
        }
    }
    return 1;
}

void ans()
{
    int A,B;
    scanf("%d%d",&A,&B);
    if(prime(A+B))
    {
        printf("Alice\n");
    }
    else
    {
        printf("Bob\n");
    }
}

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    ans();
	}
	return 0;
}


