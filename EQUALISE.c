#include <stdio.h>

int main() {
int T;
scanf("%d",&T);

while(T--){
   int A, B;
   scanf("%d %d",&A,&B);
   
   for(int i = 0; A < B; i++){
       A = A * 2;
   }
   
   for(int i = 0; B < A; i++){
       B = B * 2;
   }
   
   if(A == B){
       printf("YES\n");
       }
   else
       printf("NO\n");
  }
  return 0;
}
