#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int value, temp, count = 100, scope = 6, i=0;
	int side[6] = {0,};
	temp=time(NULL);
	srand(temp); //seed ����
	while(i<count){
		
		value = rand()%scope;//����
		//printf("�ֻ��� ���� ���: %d\n",value);
		side[value%6]++;
		i++; 
	} 
	for(i=0; i<6;i++){
		printf("%d��: %d ��\n",i+1,side[i]); 
	}
	return 0;
} 
