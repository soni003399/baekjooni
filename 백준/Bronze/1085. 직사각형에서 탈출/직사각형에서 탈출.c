#include <stdio.h>

int main(){

int x,y,w,h;
scanf("%d %d %d %d", &x, &y, &w, &h);
int min=x;
if (y<min) min=y;
if (h-y<min) min = h-y;
if (w-x<min) min = w-x;
printf("%d\n", min);
return 0;
}