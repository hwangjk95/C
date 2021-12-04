#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("정수 2개를 저장할 공간이 필요\n");
    int *list = (int*)malloc(sizeof(int)*2); //heap 공간에 정수 2개를 저장할 동적메모리 할당
    int i; //stack영역에 할당
    int *list_new;  //새로운 포인터 선언
    list[0] = 10;  
    list[1] = 20; 
    printf("정수 3개를 저장할 공간으로 확장\n");

    list_new=(int*)realloc(list,sizeof(int)*3); //malloc으로 할당했던 동적메모리를 재설정
    list_new[2]=30; //추가된 공간에 저장
    
    for(i=0; i<3; i++)
        printf("%d ", list_new[i]); //확장되어 저장된 동적메모리에 있는 값 출력
    printf("\n");
    return 0;
}