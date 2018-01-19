#include<stdio.h>
#include<stdlib.h>
int main()
{
	    char bank[100]={0};
	        int a,i,j,sum = 0;
		    
		    scanf("%d",&a);
		        scanf("%c",bank);
			    for(i = 0; i < a ; i++ ) {
				            sum += atoi(bank[i]);
					        }
			        
			        printf("%d",sum);
				    
				    return 0;   
				        
}
