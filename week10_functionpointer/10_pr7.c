#include <stdio.h>
#include <math.h>
double f1(double k); //함수의 원형 선언 f(k)=1/k
double f2(double k); //함수의 원형 선언 f(k)=cos(k)
double formula(double (*pf)(double),int n);

int main(void){
    printf("%f\n",formula(f1,10));
    printf("%f\n",formula(f2,10));;
}

double formula(double (*pf)(double),int n){
    int i;
    double sum = 0.0;

    for(i=1; i<n; i++)
        sum += pf(i) * pf(i)+pf(i)+1; //함수호출(f1호출 or f2호출)
    return sum;
    
}

double f1(double k){
    return 1.0/k;
}

double f2(double k){
    return cos(k);
}