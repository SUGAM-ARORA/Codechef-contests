#include <stdio.h>

int main(void) {
	// your code goes here
int T;
scanf("%d",&T);
while(T--)
{
int A,i,count=0;
scanf("%d",&A);
char str[A];
scanf("%s",str);
for(i=0;i<A;i++)
{
    count++;
if(str[i+1]=='1')
break;
}
printf("%d\n", count);
}
return 0;
}


