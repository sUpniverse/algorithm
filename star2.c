#include<stdio.h>

int main()
{
	    int a =0, i,j;
	        
	        scanf("%d",&a);
		    for(i = 1; i <= a ; i ++ ) {
			            for(j= a ; j > 0 ; j--) {
					                if(i >= j)
								                printf("*");
							            else
									                    printf(" ");
								            }            
				            printf("\n");
					        } 
		            
		        return 0;
			    
}
