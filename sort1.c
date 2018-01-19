#include<stdio.h>
#include<stdlib.h>

int main()
{
	    int *num;
	        int size = 0;
		    int i,j,k,l;
		        int swp = 0;
			    
			    scanf("%d",&size);
			        
			        num = (int *)malloc(sizeof(int)*size);
				    
				    for(i=0;i<size;i++)
					            scanf("%d",&num[i]);
				        
				        for (j = 0 ; j < size ; j++) {
						        for(k = j ; k < size - 1 ; k++) {
								            if(num[j] > num[k+1]) {
										                    swp = num[j];
												                    num[j] = num[k+1];
														                    num[k+1] = swp;
																                }
									            }
							            
							    }
					       
					    for( l = 0 ; l < size ; l ++) 
						            printf("%d\n",num[l]);
					        
					        return 0;
}
