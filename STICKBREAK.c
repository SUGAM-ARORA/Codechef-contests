#include <stdio.h>
#define ll long long int
#define endl '\n'

void solve()
{
    int N,K;
    scanf("%d%d",&N,&K);
    if(N%K)
    {
        printf("1\n");
    }
    else
    printf("0\n");
}

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    solve();
	}
}

