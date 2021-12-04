#include <stdio.h>
#include <stdlib.h>
int main(void){
    char *pc=NULL;
    int i=0; //stack 영역 할당
    pc =(char*)malloc(100*sizeof(char)); //동적 메모리 할당
    if(pc == NULL){ //동적 메모리 할당이 재대로 수행되었는지 확인
        printf("메모리 할당 오류\n");
        exit(1);  
    }
    for(i=0; i<26; i++){
        pc[i]='a'+i; //알파벳 소문자를 순서대로 대입
    }
    pc[i]=0; //NULL문자 추가
    printf("%s\n",pc);
    free(pc); //메모리 해제(반납)
    return 0;
    
}