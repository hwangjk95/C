//ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½×¸ï¿½ï¿½ï¿½  
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c,d,e;
	printf("ÀÌÂ÷¹æÁ¤½Ä ax^2+bx+c=0 ¿¡¼­\n");
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
	else if(d>0)// ï¿½ï¿½ï¿½ï¿½ ï¿½Ù¸ï¿½ ï¿½Î°ï¿½ï¿½ï¿½ ï¿½Ç±ï¿½   
		{
			e = sqrt(d);
			printf("x= %f , %f \n",(-b+e)/(2*a),(-b-e)/(2*a));
		}
	else if (d==0)//ï¿½ß±ï¿½   
	{
		printf("x=%f\n",(-b)/(2*a)); 
	}
	else //ï¿½ï¿½ï¿?   
	{
		printf("±ÙÀÌ ¾ø½À´Ï´Ù..\n"); 
	}
}
