//순서도 그리기  
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c,d,e;
	printf("이차방정식 ax^2+bx+c=0 에서\n");
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
	else if(d>0)// 서로 다른 두개의 실근   
		{
			e = sqrt(d);
			printf("x= %f , %f \n",(-b+e)/(2*a),(-b-e)/(2*a));
		}
	else if (d==0)//중근   
	{
		printf("x=%f\n",(-b)/(2*a)); 
	}
	else //허근   
	{
		printf("근이 없음\n"); 
	}
}
