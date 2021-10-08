#include <stdio.h>
#define COLS 3

double get_row_avg(int m[][COLS], int r);

int main(){
    int a[4][3]={10,20,30,
                 40,50,60,
                 70,80,90,
                 100,110,120};
    double avg;
    avg = get_row_avg(a,2);
    printf("Row Average = %5.2f\n",avg);
    return 0;
}

