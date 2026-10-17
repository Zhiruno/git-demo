#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{float x1,x2,y1,y2,x3,y3;
scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
printf("x1=%f x2=%f y1=%f y2=%f",x1,x2,y1,y2);
x3=(x1+x2)/2;y3=(y1+y2)/2;
printf("\n x3=%f y3=%f",x3,y3);
return 0;
}