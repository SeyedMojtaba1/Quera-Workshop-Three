#include <stdio.h>
#include <math.h>
int main()
{
	unsigned long long int adad=0,num1,num2,numz;
	int baghi,baghi2,counter=0,counter2,power,left1,left2;
	scanf("%llu %llu",&num1,&num2);
	numz=num1;
	while(num1!=0)
		{
			num1/=10;
			counter++;
		}
	num1=numz;	
		counter2=counter;
	int loop=1;
	while(loop<=counter)
		{
			
			power=pow(10,(counter2-1));
			left1=num1/power;
			adad+=left1;
			adad*=10;
			
			
			left2=num2/power;
			adad+=left2;
			adad*=10;
			
			num1-=(left1*power);
			num2-=(left2*power);
			
			counter2--;
			loop++;
		}
		
		adad/=10;
		printf("%llu",adad);
}
