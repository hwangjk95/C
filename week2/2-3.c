#include <stdio.h>
void main(void){
	static int a[5][4]={{3,5,6},{2,1,4},{8,7,1},{3,5,4}};
	int i,j;
	for (i=0; i<4; i++)
		for(j=0;j<3;j++){
			a[i][3] += a[i][j]; //i번째 행의 합 
			a[4][j] += a[i][j]; //j번째 열의 합
			a[4][3] += a[i][j]; 
		}
	for(i=0;i<5;i++){
		if(i==4)printf("---------------\n");
		for(j=0;j<4;j++){
			if(j==3)printf("|");
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
