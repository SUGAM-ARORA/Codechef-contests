#include <stdio.h>

int main(void) {
int T;
scanf("%d",&T);
while(T--)
{
int A,i,count=0;
scanf("%d",&A);
char str[A];
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='1')
{
count++;
}
else
{
break;
}
}
printf("%d\n", count);
}
return 0;
}
