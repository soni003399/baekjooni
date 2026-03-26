#include <stdio.h>
int main () {
int A,B;
int i=1;
int n;
int result ;

scanf("%d", &n);
while(i<=n){
scanf("%d %d", &A, &B);

result= A+B;
printf("%d\n", result);
i++;}
return 0; }