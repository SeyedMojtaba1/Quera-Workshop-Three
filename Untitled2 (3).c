#include <stdio.h>
int main()
{
	long long int sum=0,num,sum2=10,baghi,loop,loop2;
	scanf("%lld",&num);
	if(num>=10)
	{
	for(loop2=1;sum2>=10;loop2++)
	{
		sum2=sum;
		
		for(loop=1;num!=0;loop++)
			{
				baghi=num%10;
				num=num/10;
				sum+=baghi;
				
			}
			sum2=sum;
			num=sum;
			sum=0;
	}		}
	else
		sum2=num;
	
	printf("%lld",sum2);		
}
