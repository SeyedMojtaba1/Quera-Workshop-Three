#include <stdio.h>
#include <math.h>

unsigned long long int mabna(unsigned long long int adada, int mabnab)
{
	unsigned long long int adad2=0;
	int baghi;
	while(adada!=0)
		{
			baghi=adada%mabnab;
			adada/=mabnab;
			adad2+=baghi;
			adad2*=10;
			
		}
	adad2/=10;
	return adad2;	
}

int main()
{
	unsigned long long int num10,num,numz;
	int mabnab,counter=0;
	scanf("%llu",&num10);
	scanf("%d",&mabnab);
	num=mabna(num10,mabnab);
	
	numz=num;
	while(num!=0)
		{
			num/=10;
			counter++;
		}

	num=numz;

	int power,left,sum1=0,sum2=0;

	while(1)
		{
			
			power=pow(10,(counter-1));
			left=num/power;
			sum1+=left;
			num-=(left*power);	
			counter--;
			
			if(counter==0)
				break;
			
			left=num/(power/10);
			sum2+=left;
			num-=(left*(power/10));
			counter--;
			
			if(counter==0)
				break;
			
			
		}
	
	
	if(sum1==sum2)
		printf("YES");
	else
		printf("NO");		
}
