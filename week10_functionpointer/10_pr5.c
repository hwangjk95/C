//�Լ� ������
#include <stdio.h>
struct Calc{
    int num;
    int (*fp)(int,int); //�Լ������Ͱ� ����ü�� ���
};

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main(){
    struct Calc c;
    c.fp=add;
    printf("%d\n", c.fp(20,10));
    c.fp = sub;
    printf("%d\n",c.fp(20,10));
    return 0;
}