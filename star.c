#include <stdio.h>

int main()
{
	int size = 5;
	for (int i=0; i<size;i++){
		
		for (int j=0; j<1; j++){
			
			
			printf("");
		}
		
		
		for(int k=0; k<(size-i)*2-1;k++){
			
			
			printf("@");
		}
		
		printf("\n");
	}
	
	for(int i=2;i<=size;i++){
		
		
		for(int j=size; j<i;j--){
			
			
			printf(" ");
		}
		
		for(int k=0;k<i*2-1;k++){
			
			
			printf("@");
		}
		
		printf("\n");
	}
	
	return 0;
}