//������ �׸���  
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c,d,e;
	printf("���������� ax^2+bx+c=0 ����\n");
	printf("a: ");
	scanf("%lf",&a);
	printf("b: ");
	scanf("%lf",&b);
	printf("c: ");
	scanf("%lf",&c);
	
	d = b*b - 4*a*c;
	
	if(a==0){
		printf("x = %f\n",-c/b);
	}
	else if(d>0)// ���� �ٸ� �ΰ��� �Ǳ�   
		{
			e = sqrt(d);
			printf("x= %f , %f \n",(-b+e)/(2*a),(-b-e)/(2*a));
		}
	else if (d==0)//�߱�   
	{
		printf("x=%f\n",(-b)/(2*a)); 
	}
	else //���?   
	{
		printf("���� �����ϴ�..\n"); 
	}
}
