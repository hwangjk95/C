// 배열의 합과 평균
#include <stdio.h>
#define LIST 10
int main(){
    int i, sum=0;
    int a[LIST];
    for (i=0; i<LIST; i++){
        printf("정수 입력:");
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    printf("배열의 합 ==> %d\n",sum);
    printf("배열의 평균 ==> %d\n",sum/LIST);
    return 0;

    
}