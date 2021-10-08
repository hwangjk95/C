#include <stdio.h>
int main(){
	static int x[5]={30,20,60,40,50}; 
	static int y[5]={20,25,30,45,10};
	int i,z[5]; //각 배열 선언  
	for(i=0; i<5; i++) 
		z[i]=x[i]+y[4-i]; //z배열에 x와y 서로 반대 위치에 있는 원소의 합 계 산 
	printf("두 배열의 반대 위치 원소의 합\n");
	for(i=0; i<5; ++i)
		printf(" %d + %d = %d\n",x[i],y[4-i],z[i]);//화면에 출력		 
		return 0;	
}
