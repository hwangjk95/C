#include <stdio.h>
struct student{
    int number;
    char name[10];
    double height;
    struct student *next;
};

int main(void){
    struct student s1 ={30,"Kim",167.2,NULL};
    struct student s2 ={31,"Park",179.1,NULL};
    struct student s3 ={32,"Lee",189.1,NULL};
    struct student s4 ={33,"Hwang",172.3,NULL};
    struct student s5 ={34,"Lim",159.4,NULL};
    
    struct student *first=NULL;
    struct student *current=NULL;
    
    first=&s1;
    
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;
    s4.next=&s5;    
    s5.next=NULL;
    current=first;
    while(current!=NULL){
        printf("학생의 번호=%d 이름=%s, 키=%f\n",current->number,current->name,current->height);
        current = current->next; //다음 구조체 변수(Node)를 포인트하게
    }
}