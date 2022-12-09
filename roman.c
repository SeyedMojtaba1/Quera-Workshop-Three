#include <stdio.h>
#include <math.h>

int main()
{
	int num,num2,ragham,adad,power;
	scanf("%d",&num);
	
	num2=num;
	
	while(num!=0)
		{
			num/=10;
			ragham++;
		}
	num=num2;
	int loop;
	for(loop=2;ragham!=0;loop--)
		{
			power=pow(10,ragham-1);
			adad=num/power;
			adad*=power;
			num-=adad;
							
			switch(adad)
				{
					case 1 : printf("I");break;
					case 2 : printf("II");break;
					case 3 : printf("III");break;
					case 4 : printf("IV");break;
					case 5 : printf("V");break;
					case 6 : printf("VI");break;
					case 7 : printf("VII");break;
					case 8 : printf("VIII");break;
					case 9 : printf("IX");break;
					case 10 : printf("X");break;
					case 20 : printf("XX");break;
					case 30 : printf("XXX");break;
					case 40 : printf("XL");break;
					case 50 : printf("L");break;
					case 60 : printf("LX");break;
					case 70 : printf("LXX");break;
					case 80 : printf("LXXX");break;
					case 90 : printf("XC");break;
					case 100 : printf("C");break;
					
				}
				ragham--;
			}
}
