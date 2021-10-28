//최솟값
#include <stdio.h>
int main(){
    int i, min, num, a[100];
    printf("입력할 정수의 개수를 입력하시오:");
    scanf("%d",&num);
    printf("%d개의 정수를 입력하시오:",num);
    for(i=0; i<num; i++){
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i=1; i<num; i++){
        if (min>a[i])min = a[i];
    }
    printf("min = %d\n",min);
    return 0;
}