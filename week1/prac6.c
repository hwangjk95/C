#include <stdio.h>
int main(){
    int i=0, j=0,max, a[100];
    printf("정수를 입력하시오. <종료시 x입력>:");
    while(1){
        if (scanf("%d",&a[j++])==0)
            break;
    }
    max = a[0];
    for (i=1;i<j;i++){
        if(max<a[i]) max=a[i];
    }
    printf("max = %d\n",max);
    return 0;
}