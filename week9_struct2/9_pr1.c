#include <stdio.h>
struct student{
    int hakbun;
    char name[20];
    int score1;
    int score2;
    int score3;
    int tot;
    float avg;
};
int main(){
    int i;
    struct student s[3] = {{11001,"강호동",90,100,95},
    {11201,"김종민",80,90,90},{11302,"이승기",90,80,80}};
    for(i=0; i<3; i++){
        s[i].tot=s[i].score1+s[i].score2+s[i].score3;
        s[i].avg=s[i].tot / 3.0;
    }
    printf("학번 성명 점수1 점수2 점수3 총점 평균\n");
    printf("-----------------------------------\n");
    for(i=0; i<3; i++){
        printf("%6d %-8s %5d %5d %5d %6d %5.2f\n",s[i].hakbun, s[i].name, s[i].score1, s[i].score2, s[i].score3, s[i].tot,s[i].avg);
    }

}