#include <stdio.h>
int main(){
	static int x[5]={30,20,60,40,50}; 
	static int y[5]={20,25,30,45,10};
	int i,z[5]; //�� �迭 ����  
	for(i=0; i<5; i++) 
		z[i]=x[i]+y[4-i]; //z�迭�� x��y ���� �ݴ� ��ġ�� �ִ� ������ �� �� �� 
	printf("�� �迭�� �ݴ� ��ġ ������ ��\n");
	for(i=0; i<5; ++i)
		printf(" %d + %d = %d\n",x[i],y[4-i],z[i]);//ȭ�鿡 ���		 
		return 0;	
}
