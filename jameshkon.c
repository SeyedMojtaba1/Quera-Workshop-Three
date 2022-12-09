#include <stdio.h>
#include <math.h>
int main()
{
	float fact=1,n,x,e=1,x2;
	int loop;
	scanf("%f\n%f",&x,&n);
	x2=x;
	if(x==0)
		printf("1.000");
	else
		{
					if(n==1)
						printf("1.000");
					else if(n==0)
						printf("0.000");	
			else
				{
							
				for(loop=2;loop<=n;loop++)
					{
						x=x2;		
						x=pow(x,(loop-1));
						fact*=(loop-1);
						e+=(x/fact);
					}
					printf("%0.3f",e);
		}}
		
}
