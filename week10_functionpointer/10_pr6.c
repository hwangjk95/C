//�Լ������͸� �Ű������� ���
#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a - b;
}

void executer(int (*fp)(int,int)){
    printf("%d\n",fp(10,20)); //�Լ� ������ ��� �Լ�ȣ��
}
int main(){
    executer(add); //cf. executer(add());
    executer(sub);
    return 0;
}