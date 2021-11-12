#include <stdio.h>
int comp(int a, int b,int *x, int *y,int *w, int *z)
{
    *x = a+b;
    *y = a-b;
    *w = a*b;
    *z = a/b;
    return 0;
}
int main(){
    int a=100, b=50;
    int x,y,w,z;
    comp(a, b, &x,&y,&w,&z);
    printf("a와 b의 합은 %d, 차는 %d, 곱은 %d, 나눗셉은 %d입니다.\n", x,y,w,z);
    return 0;
}

