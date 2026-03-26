#include <stdio.h>
int main () { 
int X; 
int N;
int a,b;
int sum=0;

scanf("%d\n",&X);
scanf("%d\n",&N);

for (int i=0;i<N;i++){
scanf("%d %d\n", &a,&b);
sum+=a*b;}
if (sum==X){printf("Yes\n");}
else {printf("No\n");}

return 0;}