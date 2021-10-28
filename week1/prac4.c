//최댓값 찾기
#include <stdio.h>
int main(){
    int a[10] = {0}, i, max;
    printf("임의의 수 10개를 입력하시오:");
    for (i=0; i<10; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i=1 ; i<10; i++){
        if (max < a[i]) max = a[i];        
    }
    printf("max=%d\n",max);
    return 0;
}