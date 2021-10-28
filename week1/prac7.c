#include <stdio.h>
int main(){
    int i, a[11];
    for(i=0; i<=10; i++){
        a[i]=i;
        printf("&a{%d} => %d, a[%d] = %d \n",i,&a[i],i,a[i]);
    }
    printf("\n");
    printf("배열 a[0]의 번지 ==> %d\n",&a[0]);
    printf("배열 a의 시작 번지 ==> %d \n",a);
}