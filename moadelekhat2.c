#include <stdio.h>

int main()
{
	int n6=1,n4=1,n5=1,n3=1,n2=1,n,loop,loop2,loop3,loop4,loop5,loop6,loop7;
	scanf("%d",&n);
	
	
	if(n==1)
		{
			printf("    *\n");
			printf("   * *\n");
			printf("  *   *\n");
			printf(" *     *\n");
			printf("*********\n");
		}
	else
		{
			for(loop=1;loop<=(n*4)+1;loop++)
				{
					for(loop2=loop;loop2<=4*n;loop2++)
						{
							printf(" ");
						}
					if(loop==1)
							{
							printf("*\n");
							continue;
							}
					if(loop==2)		
						{
						printf("* *\n");
						continue;
						}
					if(loop==3)	
						{
						printf("*   *\n");
						continue;
						}
					if(loop==4)
						{
						printf("*     *\n");
						continue;
						}
					if(loop==5)
						{
						printf("*********\n");
						continue;
						}
					if(loop==(4*n2)+2)
						{
							for(loop3=1;loop3<=n2+1;loop3++)
								{
									printf("* *");
									if(loop3==n2+1)
										break;
									printf("     ");
									
								}
								n2++;
								printf("\n");
						}
					if(loop==(4*n3)+3)
						{
							for(loop4=1;loop4<=n3+1;loop4++)
								{
									printf("*   *");
									if(loop4==n3+1)
										break;
									printf("   ");
								}	
								n3++;
								printf("\n");
								
						}		
					if(loop==(4*n4)+4)
						{
							for(loop5=1;loop5<=n4+1;loop5++)
								{
									printf("*     *");
									if(loop5==n4+1)
										break;
									printf(" ");
								}
								n4++;	
								printf("\n");
						}	
						
						
					if(loop==(4*n6)+5)
						{
							printf("*********");
							n6++;
									for(loop7=2;loop7<=n6;loop7++)
										{
											printf("********");
										}
									
								
								printf("\n");
								
						}					
				}
		}
}
