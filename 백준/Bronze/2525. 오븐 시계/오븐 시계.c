#include <stdio.h>
int main() {
int x, y, z;
scanf("%d %d", &x, &y);
scanf("%d", &z);

y += z;
x+=y/60;
y%=60;
x%=24;

printf("%d %d\n", x, y);


return 0;
}