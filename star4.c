#include<stdio.h>

int main() 
{
	    int a=0,i,j;
	        
	        scanf("%d",&a);
		    
		    for(i = 0; i < a; i++) {
			            for(j = 0; j < a; j++) {
					                if(j < i)
								                printf(" ");
							            else
									                    printf("*");
								            }            
				            printf("\n");
					        }
		        
		            
		      return 0;
		          
		          
}
