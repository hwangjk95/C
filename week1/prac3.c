#include <stdio.h>
int main() {
    double da[5];
    int ia[5];
    printf("double형 배열 da의 메모리 크기 = %d bytes\n",sizeof(da));
    printf("double형 배열 원소 하나의 메모리 크기 =");
    printf("%d bytes\n",sizeof(da[2]));
    printf("int형 배열 db의 메모리 크기 = %d bytes\n",sizeof(ia));
    printf("int형 배열원소 하나의 메모리 크기 = %d bytes\n",sizeof(ia[4]));
    return 0;
}