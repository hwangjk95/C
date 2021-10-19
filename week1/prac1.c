#include <stdio.h>
int main(){
    int i;
    int d[4] = {0,0,0,0};
    for (i=0; i<4; i++)
        d[i] = i+1;
    for (i=1; i<=4; i++)
        printf("%d ", d[i]);
    return 0;
}